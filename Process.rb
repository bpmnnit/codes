require 'etc'

class String
    def is_integer?
          self.to_i.to_s == self
      end
end

def getUsername(uid)
    return Etc.getpwuid(uid.to_i).name
end


def getUid(pid)
    username = ''
    File.open('/proc/' + pid + '/status', 'r') do |f1|  
        while line = f1.gets 
            if line.start_with?("Uid")
                lst = line.split
                uid = lst[2]
                return uid
            end
        end  
    end
end


Dir.chdir("/proc")
proc_all = []
proc_process = []
user_pid = {}
Dir.glob('*').each do |f|
    proc_all << f
end


proc_all.each do |pid|
    if pid.is_integer?
        proc_process << pid
        uid = getUid(pid)
        #puts "User id of #{pid} is #{uid}"
        username = getUsername(uid)
        #puts username
        if user_pid.has_key?(username)
            pidlist = user_pid[username]
            pidlist << pid
            user_pid[username] = pidlist
        else
            pidlist = []
            pidlist << pid
            user_pid[username] = pidlist
        end
    end
end

user_pid.each_pair do |user,pids|
    #puts "NAME = #{user}, Process IDs = #{pids}"
    rss_total = 0
    shared_total = 0
    pids.each do |pid|
        #contents = File.read("/proc/" + pid + "/smaps")
        #puts contents
        File.open('/proc/' + pid + '/smaps', 'r') do |f1|
            while line = f1.gets 
                if line.start_with?("Rss:")
                    lst = line.split
                    rss = lst[1].to_i
                    rss_total = rss_total + rss
                end
                if line.start_with?("shared_clean:")
                    lst = line.split
                    shared = lst[1].to_i
                    shared_total = shared + shared_total
                end
            end
        end  
    end
    #puts "#{user} => #{rss_total - shared_total}"
    ganglia_command='gmetric -n' + user + '_memory_usage ' + '-v' + (rss_total - shared_total).to_s() +  ' -tint8'
    puts ganglia_command
    system(ganglia_command)
   
end


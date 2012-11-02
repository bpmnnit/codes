#!/usr/bin/python
def main():
  t = int(raw_input())
  total = 0
  for i in range(t):
    start = []
    stop = [] 
    h = {}
    g = []
    n = int(raw_input())
    for j in range(n - 1):
      s = raw_input()
      l = s.split()
      a = l[0]
      b = l[1]
      c = l[2]
      total += int(c.split('$')[0])
      h[a] = l
      start.append(a)
      stop.append(b)  
    start_set = set(start)
    stop_set = set(stop)
    start = list(start_set - stop_set)
    stop = list(stop_set - start_set)
    while h[start[0]][1] != stop[0]:
      print h[start[0]][0], h[start[0]][1], h[start[0]][2]
      start = [h[start[0]][1]]
    print h[start[0]][0], h[start[0]][1], h[start[0]][2]  
    print str(total) + '$'
    total = 0

if __name__ == '__main__':
  main()

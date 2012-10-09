#!/usr/bin/python

def main():
  t = int(raw_input())
  for i in range(t):
    n = raw_input()
    if n[-1] == '1' or n[-1] == '3' or n[-1] == '7' or n[-1] == '9':
      print 'No No'  
    else:
      n = int(n)
      if n % 252 == 0:
        a = 'Yes'
      else:
        a = 'No'
      if n % 525 == 0:
        b = 'Yes'
      else:
        b = 'No'
      print a + ' ' + b
    
if __name__ == '__main__':
  main()            

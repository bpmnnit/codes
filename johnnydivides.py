#!/usr/bin/python
def func(s):
  y = 0
  n = 0
  for i in range(len(s)):
    for j in range(i, len(s)):
      substr = int(s[i : j + 1])
      if substr % 2 == 0:
        y += 1
      else:
        n += 1
  return (y, n)
    
def main():
  t = int(raw_input())
  for i in range(t):
    s = raw_input()
    (y, n) = func(s)
    print str(i + 1) + '.' + ' ' + str(y) + ' ' + str(n) 

if __name__ == '__main__':
  main()                         

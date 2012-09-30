#!/usr/bin/python
def main():
  t = int(raw_input())
  while t:
    t -= 1
    s = raw_input()
    n = int(raw_input())
    sum = 0
    for i in range(n):
      sum = (sum + int(raw_input())) % n
    if sum % n == 0:
      print 'YES'
    else:
      print 'NO'
      
if __name__ == '__main__':
  main() 

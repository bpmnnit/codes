#!/usr/bin/env python
import math
def main():
  primes = {}
  primes[0] = False
  primes[1] = False
  for i in range(2, 1001):
    primes[i] = True
  r = int(math.sqrt(1001))
  for i in range(2, r + 1):
    d = i
    j = 2
    m = d * j
    while m < 1001:
      primes[m] = False
      j += 1 
      m = d * j
  t = int(raw_input())
  for i in range(t):
    count = 0
    s = raw_input()
    a = int(s.split()[0])
    b = int(s.split()[-1])
    for j in range(a, b + 1):
      if primes[j]:
        count += 1
    print 'Case ' + str(i + 1) + ': ' + str(count)      

if __name__ == '__main__':
  main()    

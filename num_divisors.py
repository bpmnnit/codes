#!/usr/bin/env python
def main():
  ''' This python program returns the number of divisors of an input number '''
  n = int(raw_input())
  initial_n = n
  num_factors = 1
  i = 2
  while i * i <= initial_n:
    print i
    power = 0
    while n % i == 0:
      n /= i
      power += 1
    num_factors *= (power + 1)
    if n <= 1:
      break
    i += 1
  if n > 1:
    num_factors *= 2
  print num_factors
    
if __name__ == '__main__':
  main()      

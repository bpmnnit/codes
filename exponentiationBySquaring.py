#!/usr/bin/env python
''' This method is used to efficiently find x^n in log(n) time'''
def exponentiationBySquaring(x, n):
  if n == 1:
    return x
  elif n % 2 == 0:
    return exponentiationBySquaring(x * x, n / 2)
  else:
    return x * exponentiationBySquaring(x * x, (n - 1) / 2)
    
def main():
  x = int(raw_input("Enter a number: "))
  n = int(raw_input("Enter the power: "))
  print str(x) + '^' + str(n) + ' = ' + str(exponentiationBySquaring(x, n))
  
if __name__ == '__main__':
  main()         

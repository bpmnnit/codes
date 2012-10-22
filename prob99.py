#!/usr/bin/python
# Porblem 99 of ProjectEuler. Logic : For finding large exponents of large numbers (a^b), it suffices to check for log(a^b) = b * log(a)
def main():
  from math import log10
  f = open('base_exp.txt', 'rU')
  m = 0
  i = 0
  for line in f:
    i += 1
    a, x = map(int, line.split(','))
    res = x * log10(a)
    if res > m:
      m = res
      j = i
  print m, j

if __name__ == '__main__':
  main()

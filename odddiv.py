#!/usr/bin/python
import math
def main():
  h = {}
  h[0] = 0
  for i in range(1, 10000000001):
    factors = 2
    for j in range(2, math.sqrt(i)):
      if i % j == 0 :
        if i / j != j:
          factors += 2
        else:
          factors += 1
    h[i] = factors
  print h         

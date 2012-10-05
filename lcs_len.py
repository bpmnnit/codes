#!/usr/bin/python

import sys

def lcs_len(x, y):
  """This function returns length of longest common sequence of x and y."""
 
  if len(x) == 0 or len(y) == 0:
    return 0
 
  xx = x[:-1]   # xx = sequence x without its last element    
  yy = y[:-1]
  
  if x[-1] == y[-1]:  # if last elements of x and y are equal
    return lcs_len(xx, yy) + 1
  else:
    return max(lcs_len(xx, y), lcs_len(x, yy))

def main():
  x = sys.argv[1]  # command line argument 1 
  y = sys.argv[2]  # command line argument 2
  print lcs_len(x, y) 

if __name__ == '__main__':
  main()

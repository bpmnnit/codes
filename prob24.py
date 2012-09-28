#!/usr/bin/python

import itertools

def main():
  result = list(itertools.permutations([0, 1, 2, 3, 4, 5, 6, 7, 8, 9], 10))
  print result[1000000 - 1]

if __name__ == '__main__':
  main()  

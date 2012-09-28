import math
def main():
  n = int(raw_input())
  while n != 0:
    a = (n * n) / (math.pi * 2)
    print "{0:.2f}".format(a)
    n = int(raw_input())

if __name__ == '__main__':
  main()    

#!/usr/bin/python
ref = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
def main():
  count = 0
  a = raw_input()
  b = raw_input()
  for i in range(len(ref)):
    if ref[i] in a and ref[i] in b:
      count += 1
  print count

if __name__ == '__main__':
  main()

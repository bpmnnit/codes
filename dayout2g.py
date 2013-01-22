#!/usr/bin/env python
def main():
  t = int(raw_input())
  for i in range(t):
    c = ''
    v = ''
    s = raw_input()
    for j in range(len(s)):
      if s[j] == ' ':
        continue
      elif s[j] == 'a' or s[j] == 'A' or s[j] == 'e' or s[j] == 'E' or s[j] == 'i' or s[j] == 'I' or s[j] == 'o' or s[j] == 'O' or s[j] == 'u' or s[j] == 'U':
        v = v + str(s[j])
      else:
        c = c + str(s[j])
    print 'Case ' + str(i + 1) + ':'
    print v
    print c
    print 
          
if __name__ == '__main__':
  main()   

#!/usr/bin/python
def main():
  t = int(raw_input())
  for i in range(t):
    h = {'TTT': 0, 'TTH': 0, 'THT': 0, 'THH': 0, 'HTT': 0, 'HTH': 0, 'HHT': 0, 'HHH': 0}
    n = int(raw_input())
    s = raw_input()
    for j in range(len(s) - 2):
      h[s[j : j + 3]] += 1
    print n, h['TTT'], h['TTH'], h['THT'], h['THH'], h['HTT'], h['HTH'], h['HHT'], h['HHH']  

if __name__ == '__main__':
  main()      

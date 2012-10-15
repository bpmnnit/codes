#!/usr/bin/python
def main():
  while True:
    t = raw_input()
    t = t.split(' ')
    if t[0] == '0' and t[1] == '0' and t[2] == '0':
      break
    a = int(t[0])
    aa = a * a
    b = int(t[1])
    bb = b * b
    c = int(t[2])
    cc = c * c
    if a > b and a > c and aa == bb + cc:
      print 'right'
    elif b > a and b > c and bb == aa + cc:
      print 'right'
    elif c > a and c > b and cc == bb + aa:
      print 'right'
    else: 
      print 'wrong'       
    
if __name__ == '__main__':
  main() 

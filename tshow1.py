#/usr/bin/env python
import math
def main():
    pows = []
    i = 1
    while True:
        m = long(math.pow(2, i) - 1)
        if m > 1000000000000000:
            break
        pows.append(m)
        i += 1
    n = long(raw_input())
    for i in range(n):
        m = 0
        k = long(raw_input())
        for j in range(len(pows)):
            m = j
            if k < pows[j]:
                break
        num = k - pows[m - 1]
        s = bin(num)
        s = s[2:]
        t = ''
        if len(s) < m:
            for x in range(m - len(s)):
                t += '0'
        t += s
        res = ''
        for x in range(len(t)):
            if t[x] == '0':
                res += '5'
            elif t[x] == '1':
                res += '6'
        print res        
            
if __name__ == '__main__':
    main()
        

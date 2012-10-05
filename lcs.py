#!/usr/bin/python
import sys 
def lcs(x, y):
    n = len(x)
    m = len(y)
    table = dict()  # a hashtable, but we'll use it as a 2D array here
 
    for i in range(n+1):     # i=0,1,...,n
        for j in range(m+1):  # j=0,1,...,m
            if i == 0 or j == 0:
                table[i, j] = 0
            elif x[i-1] == y[j-1]:
                table[i, j] = table[i-1, j-1] + 1
            else:
                table[i, j] = max(table[i-1, j], table[i, j-1])
    print 'Length of LCS : ' + str(table[n, m])
    # Now, table[n, m] is the length of LCS of x and y.
 
    # Let's go one step further and reconstruct
    # the actual sequence from DP table:
 
    def recon(i, j):
        if i == 0 or j == 0:
            return []
        elif x[i-1] == y[j-1]:
            return recon(i-1, j-1) + [x[i-1]]
        elif table[i-1, j] > table[i, j-1]:
            return recon(i-1, j)
        else:
            return recon(i, j-1)
 
    return recon(n, m)

def main():
  x = sys.argv[1]
  y = sys.argv[2]
  t = '' 
  s = lcs(x, y)
  for i in range(len(s)):
    t = t + str(s[i])
  print t

if __name__ == '__main__':
  main()    

#!/usr/bin/python

def main():
  a = [192, 442, 692, 942]
  t = int(raw_input())
  for i in range(t):
    n = int(raw_input())
    n -= 1
    print 1000 * (n / 4) + a[n % 4]

if __name__ == '__main__':
  main()    

# Above problem finds the kth number having 888 as the last 3 digits in its cube
# Following numbers help in deducing the logic. Look at the last three digits of
# their cubes.
# 192 7077888
# 442 86350888
# 692 331373888
# 942 835896888
# 1192 1693669888    # k values from 5 to 8 remain in 1000 and 192,442,692 & 942
# 1442 2998442888    # repeat. So if k is from 5 to 8 make it a thousand and add 
# 1692 4843965888    # one of the above 4 numbers based on their modulo by 4
# 1942 7323988888
# 2192 10532261888
# 2442 14562534888
# 2692 19508557888
# 2942 25464080888
# 3192 32522853888
# 3442 40778626888
# 3692 50325149888
# 3942 61256172888
# 4192 73665445888
# 4442 87646718888

/*
 * =====================================================================================
 *
 *       Filename:  newsch.cpp
 *
 *    Description:  This is the NEWSCH of codechef october2012 challenge.
 *                  Find the no. of permutations of a,b,c,d based on 'n' (eg. if n = 6)
                    perms can be like, a,b,c,d,b,c. Consecutive letters not allowed like
                    a,b,c,d,d,c and first and last should not be same like a,b,c,d,c,a.
 *
 *        Version:  1.0
 *        Created:  10/06/2012 01:50:46 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  Ubuntu
 *
 * =====================================================================================
 */
#include<iostream>
#include<cmath> 
using namespace std;

int main(){
  int t, n;
  cin >> t;
  while(t--) {
    cin >> n;   // no. of days
    cout << pow(3, n) + 3 * pow(-1, n) << endl;
  }
}

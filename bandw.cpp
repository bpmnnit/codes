/*
 * =====================================================================================
 *
 *       Filename:  bandw.cpp
 *
 *    Description:  This is the BANDW problem of Spoj
 *
 *        Version:  1.0
 *        Created:  09/14/2012 11:14:22 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bhanu P Singh
 *   Organization:  Ubuntu
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
#include <cstdlib> 
using namespace std;

int main() {
  int len, ways;
  string s, t;
  cin >> s >> t;
  while(s.compare("*") && t.compare("*")){
    ways = 0; 
    len = s.length();
    for(int i = 0; i < len; i++) { 
      if(i == 0 && s[i] != t[i])
        ways += 1;
      else if(s[i] != t[i] && s[i - 1] == t[i - 1])
        ways += 1;
    }
    cout << ways << endl;
    cin >> s >> t;
  }
}

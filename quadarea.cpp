/*
 * =====================================================================================
 *
 *       Filename:  quadarea.cpp
 *
 *    Description:  This is the problem QUADAREA of Spoj
 *
 *        Version:  1.0
 *        Created:  09/29/2012 02:01:44 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  Ubuntu
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstdio>
#include <cmath> 
using namespace std;

int main() {
  int t;
  double a, b, c, d, s, k;
  cin >> t;
  while(t--) { 
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    s = (a + b + c + d) / 2;
    k = sqrt((s - a) * (s - b) * (s - c) * (s - d));
    printf("%.02lf\n", k);
  }
}

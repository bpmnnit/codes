/*
 * =====================================================================================
 *
 *       Filename:  faketsp.c
 *
 *    Description:  This is the FAKETSP problem of spoj.
 *
 *        Version:  1.0
 *        Created:  09/15/2012 03:36:05 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bhanu P Singh
 *   Organization:  Ubuntu
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h> 
int main(){
  double a, b, x, y, d;
  scanf("%lf%lf%lf%lf", &a, &b, &x, &y);
  d = sqrt(pow((x - a), 2) + pow((y - b), 2));
  printf("%.3lf\n", d);
}

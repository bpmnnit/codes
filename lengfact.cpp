/* LENGFACT problem of SPOJ: logic is the log10 of a number is the digits in it.
 * Apply the stirling formula to calculate the factorial of large number and apply log base 10
 * to get the number its digits. 
 */
#include<cstdio>
#include<cmath>

int main(){
  int t;
  double len, n, pi = acos(-1.0);
  scanf("%d", &t);
  while(t--){
    scanf("%lf", &n);
    if(n <= 3.0)
      len = 1.0;
    else
      len = floor((n * log(n) - n + (log(2.0 * pi * n)) / 2.0) / log(10.0)) + 1.0;
    printf("%.0lf\n", len);
  }
}

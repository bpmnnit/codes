//Problem SPEED of spoj. Logic: Just divide the speeds by gcd 
//and ouput the absolute value of their difference 
#include<stdio.h>
#include<math.h>
int a[1000001];
int gcd(int m, int n){
  while(m != n && m > 0 && n > 0){
    if(m > n) {m = m - n;}
    else {n = n - m;}
  }
  if(m == n) return m;
  else return -1;
}
int main(){
  int t, m, n, g;
  scanf("%d", &t);
  while(t--){
    scanf("%d%d", &m, &n);
    g = gcd(abs(m), abs(n));
    printf("%d\n", abs((m / g) - (n / g)));
  }
}

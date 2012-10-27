#include<stdio.h>
long long int gcd(long long int u, long long int v) {
  if (v)
    return gcd(v, u % v);
  else 
    return u < 0 ? -u : u; 
}
int main(){
  int t, a, b, c;
  long long int num, den, g;
  scanf("%d", &t);
  while(t--){
    scanf("%d%d%d", &a, &b, &c);
    if(c <= a && c <= b){
      den = 2 * a * b;
      num = c * c;
    }
    else if(c <= a && c > b){
      num = b * ((2 * c) - b);
      den = 2 * a * b;
    }
    else if(c > a && c <= b){
      num = a * ((2 * c) - a);
      den = 2 * a * b;
    }
    else{
      if (c - a < b){
    	  num = (2 * a * b) - (a + b - c) * (a + b - c); 
        den = 2 * a * b;
      }
      else{
        num = 1;
        den = 1;
      }
    }
    g = gcd(num, den);
    printf("%lld/%lld\n", num / g, den / g);
  }
}

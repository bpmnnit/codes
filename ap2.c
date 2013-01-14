#include<stdio.h>
int main(){
  int t;
  long long int i, x, y, d, a, s, n;
  scanf("%d", &t);
  while(t--){
    scanf("%lld%lld%lld", &x, &y, &s);
    n = (2 * s) / (x + y);
    d = (y - x) / (n - 5);
    a = x - (2 * d);
    printf("%lld\n", n);
    for(i = 0; i < n; i++){
      printf("%lld ", a + (i *d));
    }
    printf("\n");
  }
}

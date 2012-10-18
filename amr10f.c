//Tutorial problem AMR10F of spoj
#include<stdio.h>
int main(){
  int i, t, n, a, d;
  long long int sum;
  scanf("%d", &t);
  while(t--){
    scanf("%d%d%d", &n, &a, &d);
    sum = 0;
    for(i = 0; i < n; i++)
      sum += a + (i * d);
    printf("%lld\n", sum) ;
  }
}

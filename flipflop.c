#include <stdio.h>
int main() {
  int T, G, I, Q;
  long long int N, ans;
  scanf("%d", &T);
    while(T--){         
      scanf("%d", &G);
      while(G--){
        scanf("%d %lld %d",&I,&N,&Q);
          if(I == 1){
            if(N % 2){
              if(Q == 1)
                ans = (N + 1) / 2 - 1;
              else
                ans = (N + 1) / 2;
            }
            else {
              ans = N / 2;
            } 
          }
          if(I == 2){
            if(N % 2){
              if(Q == 1)
                ans = (N + 1) / 2;
              else
                ans = (N+1) / 2 - 1;
            }
            else {
              ans = N / 2;
            }
          }
          printf("%lld\n",ans);
     }
  }
  return 0;
}

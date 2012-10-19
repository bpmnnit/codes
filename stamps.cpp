//Problem STAMPS of Spoj.
#include<cstdio>
#include<algorithm>
using namespace std;
int a[1001];
int main(){
  int i, t, f, j, k = 1;
  long long int sum, n;
  scanf("%d", &t);
  while(k <= t){
    scanf("%lld%d", &n, &f);
    for(i = 0; i < f; i++)
      scanf("%d", &a[i]);
    sort(a, a + f);
    sum = 0;
    for(i = f - 1, j = 1; i >= 0; i--, j++){
      sum += a[i];
      if(sum >= n){
        break;
      }
    }
    if(j > f){
      printf("Scenario #%d:\nimpossible\n\n", k);

    }
    else
      printf("Scenario #%d:\n%d\n\n", k, j);
    k++;  
  }
}

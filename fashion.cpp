// Problem FASHION of spoj. Maximise the product of two arrays
// Sort the arrays and multiply corresponding elements.
#include<cstdio>
#include<algorithm>
using namespace std;
int x[1001];
int y[1001];
int main(){
  int i, t, n;
  long long int sum;
  scanf("%d", &t);
  while(t--){
    sum = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
      scanf("%d", &x[i]);
    sort(x, x + n);
    for(i = 0; i < n; i++)
      scanf("%d", &y[i]);
    sort(y, y + n);  
    for(i = 0; i < n; i++)
      sum += x[i] * y[i];
    printf("%lld\n", sum);  
  }
}

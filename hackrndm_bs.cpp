// This code is faster than the one using set
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
  long long int i, n, k, c = 0;
  scanf("%lld%lld", &n, &k);
  long long int input[n];
  for(i = 0; i < n; i++)
    scanf("%lld", &input[i]);
  sort(input, input + n);
  for(i = 0; i < n; i++)
    if(binary_search(input, input + n, input[i] + k))
      c++;
  printf("%lld", c);
}

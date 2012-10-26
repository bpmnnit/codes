#include<cstdio>
#include<set>
using namespace std;
long long int a[500001];
set<long long int> s;
void recaman(){
  int i = 0, j;
  long long int val, am, x;
  a[i++] = 0;
  s.insert(0);
  for(j = 1; j <= 500000; j++){
    val = a[j - 1];
    am = val - j;
    x = val + j;
    if(am < 0){
      a[i++] = x;
      s.insert(x);
    }
    else if(s.find(am) == s.end()){
        a[i++] = am;
        s.insert(am);
    }
    else{
      a[i++] = x;
      s.insert(x);
    }
  }
}
int main(){
  recaman();
  int n;
  while(1){
    scanf("%d", &n);
    if(n < 0)
      break;
    printf("%lld\n", a[n]);
  }
}

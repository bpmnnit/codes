#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
  int a, d, i;
  scanf("%d%d", &a, &d);
  while(a != 0 && d != 0){
    int attack[a];
    int defend[d];
    for(i = 0; i < a; i++)
      scanf("%d", &attack[i]);
    sort(attack, attack + a);  
    for(i = 0; i < d; i++)
      scanf("%d", &defend[i]);
    sort(defend, defend + d);
    if(attack[0] < defend[1])
      printf("Y\n");
    else
      printf("N\n");    
    scanf("%d%d", &a, &d);
  }
}

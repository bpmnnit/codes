#include<cstdio>
int pos[1000001];
bool iscubenum[1000001];
int main(){
  int t, num, countfree = 1, cube, times, c = 1;
  for(int i = 2; i <= 100; i++){
    cube = i * i * i;
    times = 1000000 / cube;
    for(int j = 1; j <= times; j++){
      iscubenum[j * cube] = true;
    }
  }
  for(int i = 1; i <= 1000000; i++){
    if(!iscubenum[i])
      pos[i] = countfree++;
  }  
  scanf("%d", &t);
  while(c <= t){
    scanf("%d", &num);
    if(iscubenum[num])
      printf("Case %d: Not Cube Free\n", c);
    else
      printf("Case %d: %d\n", c, pos[num]);
    c++;  
  }
}

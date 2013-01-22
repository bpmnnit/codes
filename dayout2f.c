#include<stdio.h>
int main(){
  char s[150];
  int i, t, a, b, n = 1, count;
  scanf("%d", &t);
  while(n <= t){
    count = 0;
    scanf("%s", s);
    scanf("%d%d", &a, &b);
    a--;
    b--;
    for(i = a; i <= b; i++){
      if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        count += 1;
    }
    printf("Case %d: %d\n", n, count);
    n++;
  }
}

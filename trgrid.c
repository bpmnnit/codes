#include<stdio.h>
int main(){
  int t, n, m;
  scanf("%d", &t);
  while(t--){
    scanf("%d%d", &n, &m);
    if(m >= 1 && n == 1)
      printf("R\n");
    else if(n > 1 && m == 1)
      printf("D\n");
    else if(n > m){
      if((n % 2 == 0) && (m % 2 == 0))
        printf("U\n");
      else if((n % 2 == 0) && (m % 2 == 1))
        printf("D\n");
      else if((n % 2 == 1) && (m % 2 == 0))
        printf("U\n");
      else if((n % 2 == 1) && (m % 2 == 1))
        printf("D\n");
    }
    else if(m > n){
      if((n % 2 == 0) && (m % 2 == 0))
        printf("L\n");
      else if((n % 2 == 0) && (m % 2 == 1))
        printf("L\n");
      if((n % 2 == 1) && (m % 2 == 0))
        printf("R\n");  
      if((n % 2 == 1) && (m % 2 == 1))
        printf("R\n");
    }
    else{
      if(n % 2 == 0)
        printf("L\n");
      else
        printf("R\n");
    }
  }
  return 0;
}

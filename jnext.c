#include<stdio.h>
void reverse(int a[], int i, int m){
  int temp, j, k;
  for(j = i, k = m - 1; (j < k && j != k); j++, k--){
    temp = a[j];
    a[j] = a[k];
    a[k] = temp;
  }
}
int main(){
  int i, j, k, t, n, m, temp, x, just, flag;
  int a[1000001];
  scanf("%d", &t);
  while(t--){
    i = 0;
    scanf("%d", &n);
    m = n;
    flag = 0;
    while(n--){
      scanf("%d", &a[i++]);
    }
    for(i = i - 1; i > 0; i--){
      if(a[i - 1] < a[i]){
        just = i;
        for(k = m - 1; k > i; k--){
          if(a[k] > a[i - 1] && a[k] <= a[k - 1]){
            if(!flag){
              flag = 1;
              just = k;
            }
          }
        }
        temp = a[i - 1];
        a[i - 1] = a[just];
        a[just] = temp;
        reverse(a, i, m);
        break;
      }
    }
    if(i == 0)
      printf("-1\n");
    else{
      for(i = 0; i < m; i++)
        printf("%d", a[i]);
      printf("\n");
    }
  }
  return 0;
}

#include<stdio.h>
#include<string.h>
int a[101][101];
int b[101][101];
int maximum(int x, int y){
  if(x > y)
    return x;
  else 
    return y;  
}

int main(){
  int max;
  int h, w, t, i, j, x, y, z;
  scanf("%d", &t);
  while(t--){
    max = 0;
    scanf("%d%d", &h, &w);
    for(i = 0; i < h; i++)
      for(j = 0; j < w; j++)
        scanf("%d", &a[i][j]);
    for(i = h - 1; i >= 0; i--){
      for(j = w - 1; j >= 0; j--){
        if(i == (h - 1)){
          b[i][j] = a[i][j];
          if(b[i][j] > max)
            max = b[i][j];
        }
        else {
          if(((j - 1) >= 0) && ((j + 1) < w)){
            b[i][j] = a[i][j] + maximum(maximum(b[i + 1][j - 1], b[i + 1][j]), b[i + 1][j + 1]);
            if(b[i][j] > max)
              max = b[i][j];
          }
          else if(((j - 1) < 0) && ((j + 1) < w)){
            b[i][j] = a[i][j] + maximum(b[i + 1][j], b[i + 1][j + 1]);
            if(b[i][j] > max)
              max = b[i][j];
          }
          else if(((j - 1) >= 0) && ((j + 1) >= w)){
            b[i][j]  = a[i][j] + maximum(b[i + 1][j - 1], b[i + 1][j]);
            if(b[i][j] > max)
              max = b[i][j];
          }
        }
      }
    }
    memset(b, 0, sizeof(b));
    printf("%d\n", max);
  }
}

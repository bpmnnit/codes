// The 0-1 knapSack Problem
#include<stdio.h>
int max(int a, int b) { return (a > b)? a : b; }
int knapSack(int W, int wt[], int val[], int n){
  int i, w;
  int K[n+1][W+1];
  for (i = 0; i <= n; i++){
    for (w = 0; w <= W; w++){
      if (i==0 || w==0)
        K[i][w] = 0;
      else if (wt[i-1] <= w)
        K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
      else
      	K[i][w] = K[i-1][w];
    }
  }
  for (i = 0; i <= n; i++){
    for (w = 0; w <= W; w++){
      printf("%d\t", K[i][w]);
    }
    printf("\n");
  }
  return K[n][W];
}
 
int main(){
  int i, n, val[100], wt[100], W;
  printf("Number of items: ");
  scanf("%d", &n);
  printf("Maximum Weight: ");
  scanf("%d", &W);
  printf("Enter %d Values: ", n);
  for(i = 0; i < n; i++)
    scanf("%d", &val[i]);
  printf("Enter %d Weights: ", n);
  for(i = 0; i < n; i++)
    scanf("%d", &wt[i]);
  printf("Max Value that could be taken: %d\n", knapSack(W, wt, val, n));
  return 0;
}

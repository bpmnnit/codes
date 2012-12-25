// This program finds if there is a subset in an array having a given sum.
/* Logic: DP, using a table of row equal to the sum and columns equal to n(length of array)
   table[0][i] is true since, since if sum == 0, its true that we have a subset having sum = 0
   table[i][j] is true only when it is true that arr[(i(sum uptil here) - arr[j - 1])] has been found before j.
 */
#include<cstdio>

bool isSubsetSum(int arr[], int n, int sum){
  bool table[sum + 1][n + 1];
  for(int i = 0; i <= n; i++)
    table[0][i] = true;
  for(int i = 1; i <= sum; i++){
    for(int j = 0; j <= n; j++)
      table[i][j] = false;
  }

  for(int i = 1; i <= sum; i++){
    for(int j = 1; j <= n; j++){
      table[i][j] = table[i][j - 1];
      if(i >= arr[j - 1])
        table[i][j] = table[i][j] || table[i - arr[j - 1]][j - 1];
    }
  }
  return table[sum][n];
}

int main(){
  int arr[50], n, sum;
  printf("Enter n (<= 50) : ");
  scanf("%d", &n);
  printf("Enter %d numbers : ", n);
  for(int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  printf("Choose the sum : ");
  scanf("%d", &sum);
  if(isSubsetSum(arr, n, sum))
    printf("Found a subset with given sum.\n");
  else
    printf("A subset with given sum not found.\n");    
}

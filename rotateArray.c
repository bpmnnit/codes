#include<stdio.h>
#define MAX 100

int rightrotate(int a[], int size, int k){
  int i, j;
  for(i = 0, j = size - 1; i < j; i++, j--){
    a[i] ^= a[j];
    a[j] ^= a[i];
    a[i] ^= a[j];
  }
  for(i = 0, j = k - 1; i < j; i++, j--){
    a[i] ^= a[j];
    a[j] ^= a[i];
    a[i] ^= a[j];
  }
  for(i = k, j = size - 1; i < j; i++, j--){
    a[i] ^= a[j];
    a[j] ^= a[i];
    a[i] ^= a[j];
  }
}    

int leftrotate(int a[], int size, int k){
  int i, j;
  for(i = 0, j = size - 1; i < j; i++, j--){
    a[i] ^= a[j];
    a[j] ^= a[i];
    a[i] ^= a[j];
  }
  for(i = 0, j = k - 1; i < j; i++, j--){
    a[i] ^= a[j];
    a[j] ^= a[i];
    a[i] ^= a[j];
  }
  for(i = k, j = size - 1; i < j; i++, j--){
    a[i] ^= a[j];
    a[j] ^= a[i];
    a[i] ^= a[j];
  }
}    

int main(){
  int a[MAX], b[MAX], size, i, k, j;
  printf("Enter the size of array, less than %d\n", MAX);
  scanf("%d", &size);
  printf("Enter %d numbers : ", size);
  for(i = 0; i < size; i++)
    scanf("%d", &a[i]);
  printf("Array you entered is : ");
  for(i = 0; i < size; i++){
    printf("%d ", a[i]);
    b[i] = a[i];
  }
  printf("\n");
  printf("Enter the position for rotating the array : ");
  scanf("%d", &k);
  rightrotate(a, size, k);
  printf("Array after right rotating by %d units : ", k);
  for(i = 0; i < size; i++)
    printf("%d ", a[i]);
  printf("\n");  
  leftrotate(b, size, size - k);
  printf("Array after  left rotating by %d units : ", k);
  for(i = 0; i < size; i++)
    printf("%d ", b[i]);
  printf("\n");
}

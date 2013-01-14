/* The program finds the nth fibonacci number using the exponetiation by squaring method,
 * using the matrix M = [ [1, 1] 
                          [1, 0] 
                        ]
 * This matrix when multiplied by itself, then (0, 0) element is the next fibonacci number                   
 * So, do M^n and then (0, 0) element is the nth fibonacci number and this exponetiation
 * can be done in logn time using exponetiation by squaring 
*/
#include<stdio.h>
#include<stdlib.h>

void multiply(int F[2][2], int M[2][2]){
  int x = F[0][0] * M[0][0] + F[0][1] * M[1][0];
  int y = F[0][0] * M[0][1] + F[0][1] * M[1][1];
  int p = F[1][0] * M[0][0] + F[1][1] * M[1][0];
  int q = F[1][0] * M[0][1] + F[1][1] * M[1][1];

  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = p;
  F[1][1] = q;
}

void power(int F[2][2], int n){
  if(n == 0 || n == 1)
    return;
  int M[2][2] = {{1, 1}, {1, 0}};
  power(F, n / 2);
  multiply(F, F);
  if(n % 2 != 0)
    multiply(F, M);
}

unsigned int nthFibonacciNumber(int n){
  int F[2][2] = {{1, 1}, {1, 0}};
  if(n == 0)
    return 0;
  power(F, n - 1);
  return F[0][0];
}

int main(){
  int n;
  printf("Enter a positive number: ");
  scanf("%d", &n);
  if(n < 0){
    printf("Enter a positive number! :P\n");
    exit(1);
  }
  printf("%dth fibonacci number is: %u\n", n, nthFibonacciNumber(n));
}

#include<stdio.h>
/* Taken help from Brian Kernighan's Algo for finding the number of set bits.
 * Instead of subtracting 1 and ANDing(and checking if the number becomes 0),
 * add 1 and OR and check if the number becomes -1. 
*/

unsigned int countUnSetBits(int n){
  unsigned int count = 0;
  while(n != -1){
    n |= (n + 1);
    count++;
  }
  return count;
}

/* The following is the normal method. Loops runs 32 times for 4 bit integer 
  int countSetBits(int n){
  unsigned int count = 0;
  while(n){
    count += n & 1;
    n >>= 1;
  }
  return count;
} */ 

int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Number of unset bits in %d: %u\n", n, countUnSetBits(n));
}

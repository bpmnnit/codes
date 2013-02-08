#include<stdio.h>
/* Brian Kernighan's Algo:
 * Subtraction of 1 from a number toggles all the bits (from right to left) till the rightmost
 * set bit(including the righmost set bit). So if we subtract a number by 1 and do bitwise & 
 * with itself (n & (n-1)), we unset the righmost set bit. If we do n & (n-1) in a loop and
 * count the no of times loop executes we get the set bit count.
 * Beauty of the this solution is number of times it loops is equal to the number of set bits 
 * in a given integer. 
*/

unsigned int countSetBits(int n){
  unsigned int count = 0;
  while(n){
    n &= (n - 1);
    count++;
  }
  return count;
}

int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Number of set bits in %d: %u\n", n, countSetBits(n));
}

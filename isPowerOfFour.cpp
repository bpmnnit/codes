#include<cstdio>

bool isPowerOfFour(unsigned int n){
  int count = 0;
  if(n && !(n & (n - 1))){
    while(n > 1){
      n >>= 1;
      count++;
    }
    return (count % 2 == 0) ? true : false;
  }
  return false;
}

int main() {
  unsigned int n;
  printf("Enter a number: ");
  scanf("%u", &n);
  if(isPowerOfFour(n))
    printf("%u is a power of 4\n", n);
  else
    printf("%u is not a power of 4\n", n);  
}

/* Problem 'will it stop' of spoj.
 * while n > 1
 *  if n mod 2 = 0 then
 *    n:=n/2
 *  else
 *    n:=3*n+3
 * To check whether the above loop will stop? 
 * Logic: It will stop only when the number is a power of 2.
 */ 
#include<cstdio>
int main(){
  long long int n;
  scanf("%lld", &n);
  if(n <= 1){
    printf("TAK\n");
    return 0;
  }
  if((n != 0) && ((n & (n - 1)) == 0))
    printf("TAK\n");
  else
    printf("NIE\n");
  return 0;  
}

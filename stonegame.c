/*
 * =====================================================================================
 *
 *       Filename:  stonegame.c
 *
 *    Description:  Problem Stone game of Spoj
 *
 *        Version:  1.0
 *        Created:  09/14/2012 07:19:57 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  Ubuntu
 *
 * =====================================================================================
 */
#include <stdio.h>
int main() {
  int a[100];
  int i, t, N, sum, x;
  scanf("%d", &t);
  while(t--) {
    sum = 0;
    scanf("%d", &N);
    for(i = 0; i < N; i++){
      scanf("%d", &a[i]);
    }
    for(i = 0; i < N; i++){
      x = i + 1;
      if(a[i] >= x)
        sum += (a[i] / x);
    }
    if(sum % 2 == 0)
      printf("BOB\n");
    else
      printf("ALICE\n");        
  }
}

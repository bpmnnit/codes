/*Problem PEBBLE of Spoj. A bit string is given. You have to make each digit 0. When you make a 1 as 0 all other bits following this 1 flips.
 *In how many minimum ways you can do it. Logic: take count = 0, if bit is 1 and count is even, or bit is 0 and count is odd, increment count.
 *Final count is the minimum ways. */
#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
int main(){
  string s;
  int count, j = 1;
  cin >> s;
  while(!feof(stdin)){
    count = 0;
    for(int i = 0; i < s.length(); i++)
      if((count % 2 == 0 && s[i] == '1') || (count % 2 == 1 && s[i] == '0'))
        count++;
    printf("Game #%d: %d\n", j++, count);
    cin >> s;
  }
}

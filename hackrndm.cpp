// Problem HACKRNDM of spoj. Find occurrences of those pairs in an array of unique numbers which have a given difference.
// Logic store numbers in a set and for each number try to find the number which is number + the difference given.
// Can be done using binary search too.
#include<iostream>
#include<set>
#include<cstdio>
using namespace std;
int main(){
  long long int n, k, c = 0, a;
  set < long long int > s;
  scanf("%lld%lld", &n, &k);
  while(n > 0){
    scanf("%lld", &a);
    s.insert(a);
    n--;
  }
  for(set<long long>::const_iterator it = s.begin(); it != s.end(); it++)
    if(s.find(*it + k) != s.end())
      c++;
  printf("%lld", c);
}

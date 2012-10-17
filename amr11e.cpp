#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
#define LEN 2664

int main(){
  int t, n;
	int sq = (int)(sqrt(LEN));
  auto std::vector<bool> sieve(LEN, true);
	int i, j, k, i2 ;
  sieve[2] = true;
  for(i = 3; i <= sq; i += 2){     	
    while(sieve[i] == false)
      i += 2;
    j = i * (i - 2);
    i2 = i << 1 ;
    while((j = i2 + j) <= LEN)
      sieve[j] = false;
  }
	int lucky[1000] = {0};
	int luckypos = 0;
	for(int i = 1; i <= LEN; i++){
    int count = 0;
    if(i % 2 == 0) count++;
    for(int j = 3; j <= i; j += 2){
      if(sieve[j]){
        if(i % j == 0)
          count++;
      }
      if(count == 3){
        lucky[luckypos++] = i;
        break;
      }
	  }
	}
	cin >> t;
	while(t--){
		cin >> n;
    cout << lucky[n - 1] << endl;
	}
}

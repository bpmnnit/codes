#include <iostream>
#include <cmath>
using namespace std;

int main() {
  long long int k, c, count, factors;
  long long int d, low, high, sq;
  cin >> c;
  while(c--) {
    count = 0;
    cin >> k >> low >> high;
    for(long long int i = low; i <= high; i++) {
      factors = 0;
      sq = sqrt(i);
      for(long long int j = 2; j <= sq ; j++) {
        d = i / j; 
        if(i % j == 0 && d != j) {
          factors += 2;  
          if((factors + 2) > k)
            break;
        }
        else if(i % j == 0 && d == j) {
          factors += 1; 
          break;
        }
      }
      if((factors + 2) == k) { 
        count++; 
      }
    }
    cout << count << endl;
  }
}

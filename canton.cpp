#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int t;
  long int n, l, p, x; 
  cin >> t;
  while(t--) {
    cin >> n;
    l = ceil((1.0 + sqrt(1.0 + 8 * n)) / 2) - 1;
    p = n - (l - 1) * l / 2;
    if(l % 2 == 0)
      x = l - p + 1;
    else
      x = p;
    cout << "TERM " << n << " IS " << l + 1 - x << "/" << x << endl;
  }
}

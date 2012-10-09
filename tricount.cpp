#include <iostream>
using namespace std;

int main() {
  int t;
  unsigned long long n, m;
  cin >> t;
  while(t--) {
    cin >> n;
    m = (n *(n + 2) * (2 * n + 1)) / 8;
    cout << m << endl;
  }
}

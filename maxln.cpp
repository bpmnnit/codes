#include<iostream>
#include<cstdio>
using namespace std;

int main() {
  int i = 1, t;
  double r, s;
  cin >> t;
  while(i <= t) {
    cin >> r;
    s = 4 * r * r + 0.25;
    printf("Case %d: %.02lf\n", i, s);
    i++;
  }
}

#include<iostream>
#include<cstdio>
using namespace std;

int main() {
  double n, a;
  scanf("%lf", &n);
  while(n != 0) {
    a = (n * n) / (3.141592 * 2);
    printf("%.02lf\n", a);
    scanf("%lf", &n);
  }
}

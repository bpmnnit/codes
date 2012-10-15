#include<stdio.h>

int main() {
  int t, a, b, x, y, s, p;
  scanf("%d", &t);
  while(t--) {
    x = 0; y = 0; p = 0;
    scanf("%d%d", &a, &b);
    while(a > 0) {
      x = (a % 10) + x * 10;
      a /= 10;
    }
    while(b > 0) {
      y = (b % 10) + y * 10;
      b /= 10;
    }
    s = x + y;
    while(s > 0) {
      p = (s % 10) + p * 10;
      s /= 10;
    }
    printf("%d\n", p);
  }
}

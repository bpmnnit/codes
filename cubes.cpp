#include <iostream>
using namespace std;
int main() {
  for(int i = 2; i <= 100; i++) {
    for(int j = 2; j <= i; j++) {
      for(int k = 2; k <= i; k++) {
        for(int l = 2; l <= i; l++) {
          if((i * i * i) == ((j * j * j) + (k * k * k) + (l * l * l)) && j < k && k < l)
            cout << "Cube = " << i << ", Triple = (" << j << "," << k << "," << l << ")" << endl;
        }
      }
    }
  }
}

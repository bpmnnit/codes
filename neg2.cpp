#include <iostream>
using namespace std;
int main() {
  int arr[50], i = 0;
  long long int a;
  cin >> a;
  if(a == 0){
    cout << "0" << endl;
    return 0;
  }
  int b = -2;
  while(a != 1) {
    long long int r = a % b;
    long long int d = a / b;
    if(r == -1) {
      d += 1;
      r = a - (b * d);
      arr[i++] = r;
      a = d;
    }
    else{
      a = d;
      arr[i++] = r;
    }
  }
  arr[i] = a;
  for(int j = i; j >=0; j--)
    cout << arr[j];
  cout << endl; 
}

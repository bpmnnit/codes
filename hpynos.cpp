//Happy numbers, HPYNOS problem of spoj 
#include<iostream>
#include<map>
using namespace std;

int main(){
  int n, j, s, r, count = 0;
  bool flag = false;
  map<int, int> m;
  m[1] = true;
  for(int i = 1; i <= 1000; i++) {
    map<int, bool> n;
    flag = false;
    j = i;
    s = 0;
    count = 0;
    while(1) {
      while(j > 0) {
        r = j % 10;
        s = s + r * r;
        j = j / 10;
      }
      count++;
      if(s == 1) {
        m[i] = count;
        flag = true;
        break;
      }
      else if(n[s]) {
        m[i] = -1;
        break;
      }
      else {
        n[s] = true;
      }
      j = s;
      s = 0;
      if(flag)
        break;
    }
  }
  string num;
  cin >> num;
  for(string::iterator it = num.begin(); it != num.end(); it++) {
    if(*it == '0') {
      num.erase(it);
      it--;
    }
  }
  int sum = 0;
  for(string::iterator it = num.begin(); it != num.end(); it++) {
    sum = sum * 10 + int((*it) - 48);
  }
  if(sum <= 1000)
    cout << m[sum] << endl;
  else {
    n = sum;
    sum = 0;
    while(n > 0){
      r = n % 10;
      sum = sum + r * r;
      n = n / 10;
    }
    if(m[sum] < 0)
      cout << m[sum] << endl;
    else  
      cout << m[sum] + 1 << endl;
  }
}

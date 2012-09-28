#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
  int c, g1, g2;
  string t1, t2;
  cin >> c;
  while(c--) {
    map<string, int> mymap;
    for(int i = 0; i < 16; i++) {
      cin >> t1 >> t2 >> g1 >> g2;
      if(g1 > g2) 
        mymap[t1]++;
      else  
        mymap[t2]++;
    }
    for(map<string,int>::iterator it = mymap.begin(); it != mymap.end(); ++it){
      if((*it).second == 4){
        cout << (*it).first << endl;
        break;
      }
    }
  }
}

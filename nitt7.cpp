#include<iostream>
#include<cmath>
using namespace std;

int main() { 
  double t, a, x1, x2, y1, y2;
  double one, two;
  cin >> t;
  while(t--) {
    cin >> a >> x1 >> y1 >> x2 >> y2;
    if(((x1 == 0 && y1 == 0) && (x2 == a && y2 == a)) || ((x2 == 0 && y2 == 0) && (x1 == a && y1 == a))){
      cout << 2 * a << endl;
      //cout << "Points at the opposite corners 1" << endl;
    }
    else if(((x1 == 0 && y1 == a) && (x2 == a && y2 == 0)) || ((x2 == 0 && y2 == a) || (x1 == a && y1 == 0))){
      cout << 2 * a << endl;
      //cout << "Points at the opposite corners 2" << endl;
    }
    else if((x1 == 0 && x2 == 0) || (x1 == a && x2 == a)) {
      cout << abs(y2 - y1) << endl;
      //cout << "Points on the same line 1" << endl;
    }
    else if((y1 == 0 && y2 == 0) || (y1 == a && y2 == a)) {
      cout << abs(x2 - x1) << endl;
      //cout << "Points on the same line 2" << endl;
    }
    else if(x1 == 0 && y2 == a){
      cout << abs(a - y1) + x2 << endl;
      //cout << "p1 on y axis 1 and p2 on x axis 2" << endl;
    }
    else if(x1 == 0 && y2 == 0) {
      cout << y1 + x2 << endl;
      //cout << "p1 on y axis 1 and p2 on x axis 1" << endl;
    }
    else if(x2 == 0 && y1 == a) {
      cout << abs(a - y2) + x1 << endl;
      //cout << "p2 on y axis 1 and p1 on x axis 2" << endl;
    }
    else if(x2 == 0 && y1 == 0) {
      cout << y2 + x1 << endl;
      //cout << "p2 on y axis 1 and p1 on x axis 1" << endl;
    }
    else if(x1 == a && y2 == a) {
      cout << abs(a - x2) + abs(a - y1) << endl;
      //cout << "p1 on y axis 2 and p2 on x axis 2" << endl;
    }
    else if(x1 == a && y2 == 0) {
      cout << abs(a - x2) + y1 << endl;
      //cout << "p1 on y axis 2 and p2 on x axis 1" << endl;
    }
    else if(x2 == a && y1 == a) {
      cout << abs(a - x1) + abs(a - y2) << endl;
      //cout << "p2 on y axis 2 and p1 on x axis 2" << endl;
    }
    else if(x2 == a && y1 == 0) { 
      cout << abs(a - x1) + y2 << endl;
      //cout << "p2 on y axis 2 and p1 on x axis 1" << endl;
    }
    else if((x1 == 0 && x2 == a) || (x1 == a && x2 == 0)) {  
      if(y1 > (a / 2) && y2 > (a / 2)) {
        cout << abs(a - y1) + abs(a - y2) + a << endl;
        //cout << "both points towards x axis 2 " << endl;
      }
      else if(y1 < (a / 2) && y2 < (a / 2)) {
        cout << a + y1 + y2 << endl;
        //cout << "both points towards x axis 1" << endl;
      }
      else {
        one = a + y1 + y2;
        two = abs(a - y1) + abs(a - y2) + a;
        if(one > two){
          cout << two << endl;
          //cout << "Condition 1" << endl;
        }
        else{
          cout << one << endl;
          //cout << "Condition 1" << endl;
        }
      }
    }
    else if((y1 == 0 && y2 == a) || (y1 == a && y2 == 0)) {  
      if(x1 > (a / 2) && x2 > (a / 2)) {
        cout << abs(a - x1) + abs(a - x2) + a << endl;
        //cout << "both points towards the y axis 2" << endl;
      }
      else if(x1 < (a / 2) && x2 < (a / 2)) {
        cout << a + x1 + x2 << endl;
        //cout << "both points towards the y axis 1" << endl;
      }
      else {
        one = a + x1 + x2;
        two = abs(a - x1) + abs(a - x2) + a;
        if(one > two){
          cout << two << endl;
          //cout << "Condition 2" << endl;
        }
        else {
          cout << one << endl;
         // cout << "Condition 2" << endl;
        }
      }
    }
  }
}

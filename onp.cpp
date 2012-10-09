// The problem ONP of spoj, conversion of infix to postfix
#include<iostream>
#include<string>
using namespace std;

struct stk {
  char c;
  stk *next;
};

int priority(char c) {
  if(c == '^')
    return 4;
  else if(c == '*')
    return 3;
  else if(c == '/')
    return 3;
  else if(c == '+')
    return 2;
  else if(c == '-')
    return 2;
  else if(c == '(')
    return 1;
}

int main() {
  stk *top = NULL;
  int t, p;
  char c;
  string s;
  cin >> t;
  while(t--) {
    cin >> s;
    for(int i = 0; i < s.length(); i++) {
      c = s[i];
      if(c == '(') {
        stk *temp = new stk;
        temp->c = c;
        temp->next = top;
        top = temp;
      }
      else if(c == ')') {
        stk *temp = top;
        while(temp->c != '(' && temp->next != NULL) {
          cout << temp->c;
          temp = temp->next;
        }
        top = temp->next;
        delete temp;
      }
      else if(c == '^' || c == '*' || c == '/' || c == '+' || c == '-') {
        if(priority(c) <= priority(top->c)) {
          cout << top->c;
          top->c = c;
        }
        else {
          stk *temp = new stk;
          temp->c = c;
          temp->next = top;
          top = temp;
        }
      }
      else
        cout << c;
    }
    cout << endl;
  }
}

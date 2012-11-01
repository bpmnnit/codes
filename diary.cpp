#include<iostream>
#include<cstdio>
#include<string>
int freq[27];
using namespace std;
int main(){
  bool flag = false;
  int c, d, t = 1, max = 0, second_max = 0, x, actual_d;
  string s, farzi;
  scanf("%d", &c);
  getline(cin, farzi);
  while(t <= c){
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
      if(s[i] == ' ')
        continue;
      else{
        freq[s[i] - 64] += 1;
      }
    }
    for(int i = 0; i < 28; i++){
      if(max < freq[i]){
        max = freq[i];
        x = i;
      }
      else if(second_max < freq[i] && second_max <= max)
        second_max = freq[i];
    }
    if(max == second_max)
      cout << "NOT POSSIBLE" << endl;
    else{
      d = ((x - 5) + 26 ) % 26;
      for(int i = 0; i < s.length(); i++){
        if(s[i] == ' ')
          continue;
        int r = (int)s[i] + 26 - d;
        if(r > 90)
          r = r - 26;
        s[i] = (char)r;      
      }
      cout << d << " " << s << endl;
    }
    for(int i = 0; i < 27; i++)
      freq[i] = 0;
    max = 0; 
    second_max = 0;  
    t++;  
  }
}

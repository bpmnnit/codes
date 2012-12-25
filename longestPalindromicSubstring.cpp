//This program is meant for solving the longest palindromic subsequence problem
#include<iostream>
#include<cstring>
#include<cstdio>

void printSubStr(int start, int end, char *s){
  int i;
  for(i = start; i <= end; i++)
    printf("%c", s[i]);
  printf("\n");  
}

int longestPalindromicSubstring(char *s){
  int n = strlen(s);
  int maxlength = 1, start = 0;
  bool table[n][n];                  // maintain a table n x n, where string length is n. table[i][j] says string[i] = string[j]
  memset(table, 0, sizeof(table));
  for(int i = 0; i < n; i++)
    table[i][i] = true;              // put each entry of table where i == j as true           
  for(int i = 0; i < (n - 1); ++i){
    if(s[i] == s[i + 1]){            // if consecutive entries are same then they are palindromes of length 2
      start = i;                     
      maxlength = 2;                 
      table[i][i + 1] = true;
    }
  }// table now contains all i,j as true, where str[i] == s[j], that is positions of all 2 length palindromes are stored     
  for(int k = 3; k <= n; ++k){       
    for(int i = 0; i < n - k + 1; ++i){  // i started from 0
      int j = i + k - 1; // j started from 2(search now 3 length palindrom substrings), we have start-end pos of 2 already                        
      if(table[i + 1][j - 1] && s[i] == s[j]){// if str[i] == str[j] and table[i + 1][j - 1] = true, table[i][j] = true. This means that
        table[i][j] = true;                   // for k = 3, we will have start end position as true in table, for k=4 same as & so on 
        if(k > maxlength){
          start = i;
          maxlength = k; // k determines the length of the palindromic string
        }
      }
    }
  }
  printf("Longest Palindromic String : ");
  printSubStr(start, start + maxlength - 1, s);
  return maxlength;
}

int main(){
  char s[100];
  printf("Enter a string : ");
  scanf("%[^\n]", s);
  printf("Length of Longest Palindromic String : %d\n", longestPalindromicSubstring(s));
}

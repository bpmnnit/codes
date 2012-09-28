/*
 * =====================================================================================
 *
 *       Filename:  prob23.cpp
 *
 *    Description:  Problem 23 of Projecteuler.net
 *
 *        Version:  1.0
 *        Created:  08/24/2012 04:53:48 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  Directi
 *
 * =====================================================================================
 */
#include <iostream>
#include <cmath>
using namespace std;

int main(){
  long count = 0;
  long sum, sum_abundants;
  int d, index, index_abundant = 0, in = 0;
  int factors[100], abundants[28124], sum_of_abundants[28124];
  for(int i = 1; i <= 28123; i++) {
    sum = 0; 
    index = 0;
    factors[index++] = 1;
    for(int j = 2; j <= sqrt(i); j++) {
      if(i % j == 0) {
        factors[index++] = j;
        d = i / j;
        if(d == j)
          continue;
        else
          factors[index++] = d;
      }
    }
    for(int k = 0; k < index; k++)
      sum += factors[k]; 
    if(sum > i)
      abundants[index_abundant++] = i;
    /*cout << i << " : ";
    cout << factors[0] << " ";*/
    /*cout << endl;*/
  }
  //cout << index_abundant << endl;
  /*for(int i = 0; i < index_abundant; i++) 
    cout << abundants[i] << endl;*/
  for(int i = 0; i < index_abundant; i++) {
    for(int j = i; j < index_abundant; j++) {
       /*sum_abundants = abundants[i] + abundants[j];
       if(sum_abundants < 28123) {
         sum_of_abundants[in++] = sum_abundants;  
       }*/
       count++;
    }
  }
  /*for(int i = 0; i < in; i++)
    cout << sum_of_abundants[i] << " ";
  cout << endl; */
  cout << count << endl; 
}

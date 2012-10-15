#include<cstdio>
#include<cmath>
int main(){
  int t, i = 1;
  double r, v, theta;
  scanf("%d", &t);
  while(i <= t){
    scanf("%lf%lf", &r, &v);
    theta = 0.5 * (asin(r * 9.806 / (v * v)));
    theta = (theta * 180) / (2 * acos(0.0));
    if(isnan(theta))
      printf("Scenario #%d: -1\n", i);
    else  
      printf("Scenario #%d: %.02lf\n", i, theta);
    i++;   
  }
}

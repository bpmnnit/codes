#include<math.h>
gcd(int m,int n){if(n==0)return m;else return gcd(n,m%n);}main(){int a,b,c,t,g;scanf("%d",&t);while(t--){scanf("%d%*c%*c%d%*c%*c%d",&a,&b,&c);g=gcd(abs(a),abs(b));if(c%g==0)printf("Yes\n");else printf("No\n");}}
//EQCHECK problem of SPoj. Logic: ax+by=c will have infinite lattice points if c is a multiple of gcd(a, b)

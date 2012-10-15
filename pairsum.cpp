#include<stdio.h>
int a[100001];
long long int sum[100001], vt[100001];
int main()
{
	int n, m;
	int i, u, v;
	long long int ans,s;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
		sum[i]=i==0?a[i]:(long long int)sum[i-1]+a[i];
		vt[i]=i==0?a[i]*sum[i]:vt[i-1]+a[i]*sum[i];
		}
	scanf(" %d",&m);
	while(m--) {
		scanf("%d %d",&u,&v);
		s=u==0?0:(sum[v]-sum[u-1])*sum[u-1];
		ans=((u==0)?vt[v]:vt[v]-vt[u-1]-s);
		printf("%lld\n",ans);
		}
	return 0;
}

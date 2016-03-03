#include <stdio.h>
#define ll long long 
#define M 1000000007

int main() {
	int t,i,n,x;
	ll m,a[100002];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d, %d %lld", &n, &x, &m);
		//m = m%M;
		for(i=1; i<=n; i++){
			scanf("%d", &a[i]);
		}
		a[i]=a[i]%M;
		ll ans=0;
		ll mul=1;
		ll diff=m-1;
		for(i=x; i>0; i--){
			ans+=a[i]*mul;
			mul+=m-1;
		}
		printf("%lld\n", ans);
	}
	return 0;
}
#include <stdio.h>
int main(void) 
{
	int t, maxn = 1000002, mod = 1000000007;
	long long int precompute[maxn];
    precompute[0] = 1;
    
    precompute[1] = 1;
    for(int i=2; i<maxn; i++)
    {
        precompute[i] = ((precompute[i-1]%mod)*(i%mod)) % mod;
    }scanf("%d\n", &t);
	while(t--)
	{
	    int n;
	    scanf("%d\n", &n);
	    printf("%lld\n", (precompute[n+1]-1));
	}
	return 0;
}

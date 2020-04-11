#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb emplace_back
#define pob pop_back
typedef long long int ll;
#define test ll t; cin>>t; while(t--)
ll fac(ll n)
{
    if(n==1||n==0)
    return 1;
    else
    return (n%mod*fac(n-1)%mod)%mod;
}
ll fstexp(ll x,ll y)
{
    ll res=1;
    while(y>0)
    {
        if(y&1)
        res=(res*x)%mod;
        y=y>>1;
        x=(x*x)%mod;
    }
    return res%mod;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test
    {
        ll n,m,ans,a,b,c,b1,c1;
        cin>>n>>m;
        a=fac(n+m);
        b=fac(n);
        c=fac(m);
        b1=fstexp(b,mod-2);
        c1=fstexp(c,mod-2);
        ans=(a%mod*b1%mod*c1%mod)%mod;
        cout<<ans<<"\n";
    }
    return 0;
}

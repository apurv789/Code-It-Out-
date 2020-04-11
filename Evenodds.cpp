#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb emplace_back
#define pob pop_back
typedef long long int ll;
#define test ll t; cin>>t; while(t--)
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
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k,s,ans;
    cin>>n>>k;
    if(n&1)
    {
        if(k>(n/2+1))
        {
            s=k-n/2-1;
            ans=2+(s-1)*2;
        }
        else
        {
            s=k;
            ans=1+(s-1)*2;
        }
    }
    else
    {
        if(k>n/2)
        {
            s=k-n/2;
            ans=2+(s-1)*2;
        }
        else
        {
            s=k;
            ans=1+(s-1)*2;
        }
    }
    cout<<ans;
}
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb emplace_back
#define pob pop_back()
#define ff first
#define ss second
typedef long long int ll;
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define vvll vector<vector<ll>>
#define vcc vector<char>
#define vss vector<string>
#define bs binary_search
#define lb lower_bound
#define ub upper_bound
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
    ll n,i,j;
    cin>>n;
    cout<<fstexp(n,mod-2);
}
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb emplace_back
#define pob pop_back
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
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i,j,a,b,c;
    cin>>n;
    vll happy[n];
    for(i=0;i<n;i++){
    cin>>a>>b>>c;
    happy[i].pb(a);
    happy[i].pb(b);
    happy[i].pb(c);
    }
    vll dp[n+1];
    dp[0].pb(0);
    dp[0].pb(0);
    dp[0].pb(0);
    for(i=1;i<=n;i++)
    {
        ll k=0;
        dp[i].pb(happy[i-1][k++]+max(dp[i-1][1],dp[i-1][2]));
        dp[i].pb(happy[i-1][k++]+max(dp[i-1][0],dp[i-1][2]));
        dp[i].pb(happy[i-1][k++]+max(dp[i-1][0],dp[i-1][1]));
    }
    cout<<max({dp[n][0],dp[n][1],dp[n][2]});
}
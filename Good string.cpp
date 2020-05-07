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
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i,j,ans=0;
    cin>>n;
    string s,t;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if((t.length()&1&&s[i]!=t.back())||t.length()%2==0)
        t+=s[i];
        else
        ans++;
    }
    if((n-ans)&1)
    {
        ans++;
        t.pob;
    }
    cout<<ans<<"\n"<<t;
}
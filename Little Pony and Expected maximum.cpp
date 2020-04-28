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
    
        ll i;
        double ans=0,n,m;
        cin>>m>>n;
        for(i=1;i<=m;i++)
        {
            ans+=i*(pow((i/m),n)-pow(((i-1)/m),n));
        }
        cout<<fixed<<setprecision(12)<<ans;
    
}
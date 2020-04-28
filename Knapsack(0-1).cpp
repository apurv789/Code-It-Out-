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
    
        ll n,i,j,w;
        cin>>n>>w;
        vll W(n+1),V(n+1);
        for(i=1;i<=n;i++)
        {
            cin>>W[i]>>V[i];
        }
        ll dp[n+1][w+1];
        for(i=0;i<=n;i++)
        dp[i][0]=0;
        for(i=0;i<=w;i++)
        dp[0][i]=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=w;j++)
            if(W[i]<=j)
            {
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-W[i]]+V[i]);
            }
            else
            dp[i][j]=dp[i-1][j];
        }
        cout<<dp[n][w];
    
}

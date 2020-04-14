#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb emplace_back
#define pob pop_back
#define ff first
#define ss second
#define IMX 9223372036854775807
#define IMN -9223372036854775808
typedef long long int ll;
#define test ll t; cin>>t; while(t--)
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test
    {
        ll n,k,i,j;
        cin>>n>>k;
        ll dp[k+1],nm[k+1];
        nm[0]=0;
        for(i=1;i<=k;i++)
        nm[i]=1;
        for(i=1;i<=k;i++)
        cin>>dp[i];
        dp[0]=0;
        for(i=1;i<=k;i++)
        {
            for(j=1;j<i;j++)
            {
                if((dp[j]!=-1)&&(dp[i-j]!=-1)&&(nm[j]+nm[i-j]<=n))
                {
                    if(dp[i]==-1)
                    dp[i]=dp[j]+dp[i-j];
                    else if(dp[j]+dp[i-j]<dp[i])
                    { dp[i]=dp[j]+dp[i-j];
                      nm[i]=nm[j]+nm[i-j];
                    }
                }
            }
        }
        if(dp[k])
        cout<<dp[k]<<"\n";
        else
        cout<<"-1\n";
    }
}
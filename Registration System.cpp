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

        ll n,i,j;
        cin>>n;
        string ans[n];
        map<string,ll>mp;
        map<string,ll>val;
        for(i=0;i<n;i++)
        {
            string s;
            cin>>s;
            if(mp[s]==0)
            {
                mp[s]=1;
                val[s]=0;
                ans[i]="OK";
            }
            else
            {
                string k=to_string(val[s]+1);
                mp[s+k]=1;
                val[s]++;
                ans[i]=s+k;
            }
        }
        for(auto i:ans)
        cout<<i<<"\n";
}
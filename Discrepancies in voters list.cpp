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
        ll n1,n2,n3,i,k,ans=0;
        cin>>n1>>n2>>n3;
        map<ll,ll>mp;
        for(i=0;i<n1;i++)
        {
            cin>>k;
            mp[k]++;
        }
        for(i=0;i<n2;i++)
        {
            cin>>k;
            if(mp[k]+1==2)
            ans++;
            mp[k]++;
        }
        for(i=0;i<n3;i++)
        {
            cin>>k;
            if(mp[k]+1==2)
            ans++;
            mp[k]++;
        }
        cout<<ans<<"\n";
        for(auto& i:mp)
        if(i.ss>1)
        cout<<i.ff<<"\n";
}
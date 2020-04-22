#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb emplace_back
#define pob pop_back
#define ff first
#define ss second
typedef long long int ll;
#define test ll t; cin>>t; while(t--)
map<ll,ll>mp;
bool search(string s,string b,ll mid)
{
    ll i,k=0,f=0;
    for(i=0;i<s.length();i++)
    if(mp[i]>mid)
    {
        if(b[k]==s[i])
        k++;
        if(k==b.length()){ f=1;
        break;}
    }
    if(f)
    return 1;
    else 
    return 0;
}
main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    
        ll n,i,j,ans=-1;
        string a,b;
        cin>>a>>b;
        n=a.length();
        vector<ll>p(n);
        for(i=0;i<n;i++)
        {  cin>>p[i];
           p[i]--;
           mp[p[i]]=i;
        }
        ll l=0,r=n-1;
        while(l<=r)
        {
            ll mid=l+(r-l)/2;
            if(search(a,b,mid)){ ans=mid;
            l=mid+1;}
            else
            r=mid-1;
        }
        ans++;
        cout<<ans<<"\n";
}
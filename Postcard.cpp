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
    ll n,i,j=-1,k,sn=0,cn=0,mn,l=0;
    string s;
    cin>>s>>k;
    vll a;
    map<ll,ll>mp;
    for(i=0;i<s.length();i++)
    if(s[i]=='*')
    {a.pb(i-1); sn++; j=i; mp[i]=1;}
    else if(s[i]=='?')
    {a.pb(i-1); cn++; mp[i]=1;}
    else l++;
    a.pb(-1);
    mn=l-(sn+cn);
    if((k<mn)||(k>=mn&&k>l&&j==-1))
    cout<<"Impossible";
    else
    {
        if(k<l)
        {
            ll c=0,e=l-k;
            for(i=0;s[i]!='\0';i++)
            if(mp[i]==1)continue;
            else if((c<e&&i==a[c])){c++;continue;}
            else cout<<s[i];
        }
        else if(k>l)
        {
            ll e=k-l+1;
            for(i=0;s[i]!='\0';i++)
            if(mp[i]==1)continue;
            else if(i==j-1)
            while(e--)cout<<s[i];
            else cout<<s[i];
        }
        else
        {
            for(i=0;s[i]!='\0';i++)
            if(mp[i]==1)continue;
            else
            cout<<s[i];
        }
    }
}
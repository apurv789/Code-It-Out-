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
    ll n,i,j,k,ig;
    string s;
    cin>>s;
    map<ll,ll>mp;
    for(i=0;s[i]!='\0';i++)
    {
        if(mp[s[i]]==0)
        mp[s[i]]=i+1;
        else
        {
            n=i+1-mp[s[i]]+1; j=mp[s[i]]-1; ig=i; break;
        }
    }
    if(n>2)
    {
        ll p=13-n/2+1,p1;
        p1=p;
        vcc a(27);
        for(i=j;i<27&&p<27;i++)
        if(i==ig)continue;
        else
        a[p++]=s[i];
        if(p<27)
        {
            for(i=0;p<27;i++)
            if(i==ig)continue;
            else
            a[p++]=s[i];
            for(j=1;j<p1;j++)
            a[j]=s[i++];
        }
        else
        {
            for(p=1;p<p1&&i<27;p++)
            a[p]=s[i++];
            for(i=0;i<j;i++)
            a[p++]=s[i];
        }
        for(i=1;i<=13;i++)
        cout<<a[i];
        cout<<"\n";
        for(i=26;i>13;i--)
        cout<<a[i];
    }
    else
    cout<<"Impossible\n";
}
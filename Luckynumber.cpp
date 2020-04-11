#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb emplace_back
#define pob pop_back
typedef long long int ll;
#define test ll t; cin>>t; while(t--)
ll binary(vector<ll>a,ll l,ll r,ll k)
{
    if(l<r)
    {
        ll mid=l+(r-l)/2;
        if(a[mid]==k)
        return a[mid];
        else if(a[mid]<k)
        return binary(a,mid+1,r,k);
        else
        return binary(a,l,mid,k);
    }
    return a[l];
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i,ans;
    cin>>n;
    string s;
    ll k;
    vector<ll>a;
    a.pb(47);
    a.pb(74);
    s="4477";
    a.pb(4477);
    while(next_permutation(s.begin(),s.end()))
    {
        k=stoi(s);
        a.pb(k);
    }
    s="444777";
    a.pb(444777);
    while(next_permutation(s.begin(),s.end()))
    {
        k=stoi(s);
        a.pb(k);
    }
    s="44447777";
    a.pb(44447777);
    while(next_permutation(s.begin(),s.end()))
    {
        k=stoi(s);
        a.pb(k);
    }
    a.pb(4444477777);
    ans=binary(a,0,a.size()-1,n);
    cout<<ans;
}
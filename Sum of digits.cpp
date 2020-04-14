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
    string n;
    cin>>n;
    ll i,s=0,ans=0;
    if(n.length()==1)
    cout<<0;
    else{
    for(i=0;n[i]!='\0';i++)
    {
        ll k=n[i]-'0';
        s+=k;
    }
    ans++;
    while(s>9)
    {
        ll k=0;
        while(s>0)
        {
            k+=s%10;
            s=s/10;
        }
        ans++;
        s=k;
    }
    cout<<ans;}
}
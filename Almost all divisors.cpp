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
        ll n,i,j,f=1,p=0;
        cin>>n;
        ll d[n];
        map<ll,ll>mp;
        for(i=0;i<n;i++)
        {
            cin>>d[i];
            mp[d[i]]=1;
        }
        sort(d,d+n);
        for(i=0,j=n-1;i<=j;i++,j--)
        {
            ll c=d[i]*d[j];
            if(p==0||p==c)
            p=c;
            else
            {
                f=0;
                break;
            }
        }
        if(f)
        {
            for(i=2;i*i<=p;i++)
            {
                if(p%i==0)
                {
                    if(mp[i]==0||mp[p/i]==0)
                    {
                        f=0;
                        break;
                    }
                }
            }
        }
        if(f)
        cout<<p<<"\n";
        else
        cout<<"-1\n";
    }
}
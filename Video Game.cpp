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
        ll n,h,i,j,k=-1,b=0;
        cin>>n>>h;
        ll s[n];
        vector<ll>c;
        for(i=0;i<n;i++)
        cin>>s[i];
        while(k!=0)
        {
            cin>>k;
            c.pb(k);
        }
        i=0,j=0;
        while(c[i]!=0)
        {
            if(c[i]==1)
            {
                if(j!=0)
                j--;
            }
            else if(c[i]==2)
            {
                if(j!=n-1)
                j++;
            }
            else if(c[i]==3)
            {
                if(b==0&&s[j]!=0)
                {s[j]--;
                b=1;}
            }
            else if(c[i]==4)
            {
                if(b==1&&s[j]!=h)
                {s[j]++;
                b=0;}
            }
            i++;
        }
        for(i=0;i<n;i++)
        cout<<s[i]<<" ";
}
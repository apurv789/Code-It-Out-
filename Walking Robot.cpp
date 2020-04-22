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
        ll n,i,j,b,a,b1,a1,f=0;
        cin>>n>>b>>a;
        ll s[n];
        b1=b;
        a1=a;
        for(i=0;i<n;i++)
        cin>>s[i];
        for(i=0;i<n;i++)
        {
            
            if(s[i]==1)
            {
                if(a1<a&&b1>0)
                {
                    b1--;
                    a1++;
                }
                else if(a1>0)
                a1--;
            }
            else
            {
                if(a1>0)
                a1--;
                else if(b1>0)
                b1--;
            }
            if(b1==0&&a1==0){f=1;
            break;}
        }
        if(f)
        i++;
        cout<<i<<"\n";
    
}
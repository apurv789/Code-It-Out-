#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb emplace_back
#define pob pop_back
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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test
    {
        ll n,i,j,s1=-1e5,s2=0,f=1,mx_el=-1e5;
        cin>>n;
        vll a(n);
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>0)
            {
                f=0;
                s2+=a[i];
            }
            mx_el=max(mx_el,a[i]);
        }
        if(f)
        s2=mx_el;
        ll local_max=0;
        for(i=0;i<n;i++)
        {
            local_max=max(a[i],local_max+a[i]);
            s1=max(s1,local_max);
        }
        cout<<s1<<" "<<s2<<"\n";
    }
    return 0;
}

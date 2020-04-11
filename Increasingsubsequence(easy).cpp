#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb emplace_back
#define pob pop_back
typedef long long int ll;
#define test ll t; cin>>t; while(t--)

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i,j,c=0;
    cin>>n;
    ll a[n];
    string s;
    for(i=0;i<n;i++)
    cin>>a[i];
    i=0;j=n-1;
    ll p=0;
    ll x,y;
    while(i<=j)
    {
        ll f=1;
        if(p<a[i]&&p<a[j])
        {
            f=0;
            if(a[i]<=a[j])
            {
                s+='L';
                p=a[i];
                i++;
            }
            else
            {
                s+='R';
                p=a[j];
                j--;
            }
        }
        else if(p<a[i])
        {
            f=0;
            s+='L';
            p=a[i];
            i++;
        }
        else if(p<a[j])
        {
            f=0;
            s+='R';
            p=a[j];
            j--;
        }
        if(f)
        break;
        c++;
    }
    cout<<c<<"\n";
    cout<<s;
}
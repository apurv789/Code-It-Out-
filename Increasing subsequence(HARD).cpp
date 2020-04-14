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
    
    
        ll n,i,j,c=0;
        cin>>n;
        ll a[n];
        string str;
        for(i=0;i<n;i++)
        cin>>a[i];
        map<ll,ll>p,s;
        for(i=n-1;i>0;i--)
        if(a[i]>a[i-1])
        p[i]=p[i+1]+1;
        else
        p[i]=0;
        if(a[0]<a[1])
        p[0]=p[1]+1;
        else
        p[0]=0;
        
        if(a[0]>a[1])
        s[0]=1;
        else
        s[0]=0;
        for(i=1;i<n;i++)
        if(a[i]<a[i-1])
        s[i]=s[i-1]+1;
        else
        s[i]=0;
        i=0; j=n-1;
        ll l=0;
        while(i<=j)
        {
            if(a[i]>l&&a[j]>l)
            {
                if(a[i]>a[j])
                {
                    str+='R';
                    l=a[j];
                    j--;
                }
                else if(a[j]>a[i])
                {
                    str+='L';
                    l=a[i];
                    i++;
                }
                else
                {
                    if(p[i]>s[j])
                    {
                        str+='L';
                        l=a[i];
                        i++;
                    }
                    else
                    {
                        str+='R';
                        l=a[j];
                        j--;
                    }
                }
            }
            else if(a[i]>l)
            {
                str+='L';
                l=a[i];
                i++;
            }
            else if(a[j]>l)
            {
                str+='R';
                l=a[j];
                j--;
            }
            else
            {
                break;
            }
            c++;
        }
        cout<<c<<"\n";
        cout<<str<<"\n";
    
}
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
        ll l,s,curr_sum=0,i,j,f1=1;
        cin>>l>>s;
        string z,x;
        if(s==0&&l==1)
        {
            cout<<"0 0";
        }
        else if(s==0)
        {
            cout<<"-1 -1";
        }
        else{
        for(i=0;i<l;i++)
        z+='0';

        for(j=l-1;j>=1;j--)
        {
            ll f=1;
            for(i=9;i>=0;i--)
            if(curr_sum+i<=s)
            {
                z[j]=48+i;
                f=0;
                curr_sum+=i;
                break;
            }
        }
        if(curr_sum<s){
        if(s-curr_sum<=9)
        {
            z[0]=48+s-curr_sum;
            curr_sum=s;
        }}
        else if(curr_sum==s)
        {
            z[0]='1';
            for(i=1;i<l;i++)
            if(z[i]!='0')
            {
                z[i]--;
                break;
            }
        }
        if(curr_sum!=s)
        z="-1";
        curr_sum=0;
        for(i=0;i<l;i++)
        x+='0';

        for(j=0;j<l;j++)
        {
            ll f=1;
            for(i=9;i>=0;i--)
            if(curr_sum+i<=s)
            {
                x[j]=48+i;
                f=0;
                curr_sum+=i;
                break;
            }
        }
        if(curr_sum!=s)
        x="-1";
        cout<<z<<" "<<x;
        }
}
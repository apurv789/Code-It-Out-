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
        ll n,i,j,nd=0,p_nd,ml=0,p_ml,p=1,len=0;
        cin>>n;
        ll s[n+1];
        for(i=1;i<=n;i++)
        cin>>s[i];
        stack<ll>st;
        for(i=1;i<=n;i++)
        {
            len++;
            if(s[i]==1)
            st.push(s[i]);
            else
            {
                if(st.size()>nd)
                {
                    nd=st.size();
                    p_nd=i-1;
                }
                st.pop();
                if(st.empty())
                {
                    if(len>ml)
                    {
                        ml=len;
                        p_ml=p;
                    }
                    len=0;
                    p=i+1;
                }
            }
        }
        cout<<nd<<" "<<p_nd<<" "<<ml<<" "<<p_ml;
}
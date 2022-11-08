#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define PNO cout<<"NO\n"
#define PYES cout<<"YES\n"
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll u[n];
        map<ll,ll>mpl,mpr;
        rep(i,0,n)
        {
            cin>>u[i];
        }
        rep(i,0,n)
        {
            if(mpl.find(u[i])==mpl.end())
            mpl[u[i]]=i;
            mpr[u[i]]=i;
        }
        rep(i,0,k)
        {
            ll a,b;
            cin>>a>>b;
            if(mpl.find(a)!=mpl.end() && mpr.find(b)!=mpr.end())
            {
                if(mpl[a]<mpr[b])
                PYES;
                else
                PNO;
            }
            else
            PNO;
        }
        // for(auto x:m1)
        // cout<<x.first<<" "<<x.second<<"\n";
        // for(auto x:m2)
        // cout<<x.first<<" "<<x.second<<"\n";
    }
}

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
        ll n,q,i;
        cin>>n>>q;
        vector<ll>h,w;
        rep(i,0,n)
        {
            ll x;
            cin>>x;
            h.push_back(x);
            cin>>x;
            w.push_back(x);
        }
        rep(i,0,q)
        {
            ll hs,ws,hb,wb;
            cin>>hs>>ws>>hb>>wb;
            ll ans=0;
            rep(i,0,n)
            {
                if(h[i]>hs && h[i]<hb && w[i]>ws && w[i]<wb)
                ans+=(h[i]*w[i]);
            }
            cout<<ans<<endl;
        }
    }
}

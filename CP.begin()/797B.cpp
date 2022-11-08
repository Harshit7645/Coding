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
        ll n;
        cin>>n;
        ll a[n],b[n];
        rep(i,0,n)
        {
            cin>>a[i];
        }
        ll x=0;
        rep(i,0,n)
        {
            cin>>b[i];
            if(b[i]==0)
            x=max(x,a[i]);
        }
        set<ll>s;
        rep(i,0,n)
        {
            a[i]-=x;
        }
        ll f=0;
        rep(i,0,n)
        {
            if(b[i])
            {
                if(a[i]<b[i])
                {
                    PNO;
                    f=1;
                    break;
                }
                else
                s.insert(a[i]-b[i]);
            }
        }
        if(s.size()>1 && f!=1)
        PNO;
        else if(f!=1)
        PYES;
    }
}

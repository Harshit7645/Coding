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
        ll a[n];
        ll g=0;
        rep(i,0,n)
        {
            cin>>a[i];
            g=__gcd(a[i],g);
        }
        if(g==1)
        {
            cout<<"0\n";
            continue;
        }
        if(__gcd(n,g)==1)
        {
         
           cout<<"1\n";
            continue;
        }
        else if(__gcd(n-1,g)==1)
        {
         
           cout<<"2\n";
            continue;
        }
        else
        {
            cout<<"3\n";
            continue;
        }
    }
}

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
    ll n;
    cin>>n;
    string s1;
    cin>>s1;
    string s;
    ll ans=1;
    rep(i,0,n-1)
    {
        cin>>s;
        if(s!=s1)
        {
            ans++;
            s1=s;
        }
        else
        {
            continue;
        }
    }
    cout<<ans<<"\n";
}
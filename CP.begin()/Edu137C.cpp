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
        string s;
        cin>>s;
        ll arr[n];
        rep(i,0,n)
        {
            cin>>arr[i];
        }
        rep(i,1,n)
        {
            if(arr[i]<arr[i-1] && s[i-1]=='0' && s[i]=='1')
            {
                swap(s[i],s[i-1]);
            }
        }
        ll ans=0;
        rep(i,0,n)
        {
            if(s[i]=='1')
            {
                ans+=arr[i];
            }
        }
        cout<<ans<<endl;
    }
}

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
        ll arr[n];
        ll maxd=0,mind=1e18,maxi=0,mini=0;
        rep(i,0,n)
        {
            cin>>arr[i];
        }
        if(n==1)
        {
            cout<<0<<"\n";
        continue;
        }
        arr[0]=arr[n-1];
        cout<<n-1;
        cout<<"1 "<<n<<"\n";
        rep(i,1,n)
        {
            if(arr[i]+arr[1]%2==1)
            cout<<1<<" "<<i+1<<"\n";
            else
            cout<<i+1<<" "<<n<<"\n";
        }
    }
}

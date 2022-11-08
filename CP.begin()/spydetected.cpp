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
        rep(i,0,n)
        cin>>arr[i];
        ll f=0;
        rep(i,0,n-2)
        {
            if(arr[i]!=arr[i+1] && arr[i]==arr[i+2])
            {
                f=1;
                cout<<i+2<<"\n";
                break;
            }
            else if(arr[i]!=arr[i+1] && arr[i+1]==arr[i+2])
            {
                f=1;
                cout<<i+1<<"\n";
                break;
            }
        }
        if(!f)
        {
            if(arr[n-1]==arr[n-3])
            cout<<n-1<<'\n';
            else
            cout<<n<<"\n";
        }
    }
}

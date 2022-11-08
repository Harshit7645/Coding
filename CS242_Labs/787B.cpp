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
        {
            cin>>arr[i];
        }
        ll i,ans=0,f=0;
        for(i=n-2;i>=0;i--)
        {
            if(arr[i]>=arr[i+1])
            {
                while(arr[i]>=arr[i+1])
                {
                    ans++;
                    arr[i]/=2;
                    // if(arr[i]==0)
                    // break;
                }
            }
            if(arr[i]==0)
                {
                    f=1;
                    break;
                }
        }
        if(f==1)
        cout<<"-1\n";
        else
        cout<<ans<<"\n";
    }
}

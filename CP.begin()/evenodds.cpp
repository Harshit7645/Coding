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
    ll n,k;
    cin>>n>>k;
    if(n%2==0)
    {
        if(k<=n/2)
        {
            cout<<2*k-1<<endl;
        }
        else
        cout<<2*(k-n/2)<<endl;
    }
    else
    {
        if(k<=n/2+1)
        {
            cout<<2*k-1<<endl;
        }
        else
        cout<<2*(k-n/2-1)<<endl;
    }
}
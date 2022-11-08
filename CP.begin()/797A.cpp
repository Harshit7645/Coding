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
        if(n<=8){
            if(n==6)
            cout<<"2 3 1\n";
            else if(n==7)
            cout<<"2 4 1"<<endl;
            else if(n==8)
            cout<<"3 4 1\n";
            continue;
        }
        if(n%3==0)
        cout<<n/3<<" "<<n/3+1<<" "<<n/3-1;
        else if(n%3==2)
        cout<<n/3+1<<" "<<n/3+2<<" "<<n/3-1;
        else
        cout<<n/3+1<<" "<<n/3+2<<" "<<n/3-2;
        cout<<"\n";
    }
}

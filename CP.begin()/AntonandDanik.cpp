#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define PNO cout<<"No\n"
#define PYES cout<<"Yes\n"
using namespace std;
int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll a=0,d=0;
    rep(i,0,n)
    {
        if(s[i]=='A')
        a++;
        else
        d++;
    }  
    if(a>d)
    cout<<"Anton\n";
    else if(d>a)
    cout<<"Danik\n";
    else cout<<"Friendship\n";
}

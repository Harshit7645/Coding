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
    ll arr[n];
    rep(i,0,n)
    cin>>arr[i];
    ll temp=n-1,f=0;
    for(ll i=n-1;i>0;i--)
    {
        if(arr[i-1]<arr[i])
        {
            f=1;
            temp=i-1;
            break;
        }
    }
    if(f==0)
    cout<<"-1\n";
    else{
        for(ll i=n-1;i>=temp;i--)
        {
            if(arr[i]>arr[temp]){
            swap(arr[temp],arr[i]);
            break;}
        }
    reverse(arr+temp+1,arr+n);
    rep(i,0,n)
    cout<<arr[i]<<"\n";
    }
}

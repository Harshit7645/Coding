#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define PNO cout<<"No\n"
#define PYES cout<<"Yes\n"
using namespace std;
// ll n;
// vector<ll>arr,in;
// void nperm(ll arr[],int n);
int nperm(ll art[],int n)
{
    ll temp=n-1,f=1,ans=1;
    ll ttly[n],flag=0;
    rep(i,0,n)
    ttly[i]=art[i];
    flag=0;
    sort(ttly,ttly+n);    
    while(1)
    {
        flag=0;
        rep(i,0,n)
        {
            if(ttly[i]!=art[i])
            {
                flag=1;
                ans++;
                break;
            }
        }
        if(flag==0)
        break;
        f=0;
        for(ll i=n-1;i>0;i--)
        {
            if(ttly[i-1]<ttly[i])
            {
                f=1;
                temp=i-1;
                break;
            }
        }     
        if(f==0)
        break;
        else{
            for(ll i=n-1;i>=temp;i--)
            {
                if(ttly[i]>ttly[temp]){
                swap(ttly[temp],ttly[i]);
                break;}
            }
            reverse(ttly+temp+1,ttly+n);
        }
    }
    return ans;
}
int main()
{
    ll n;
    cin>>n;
    ll arr[n],in[n];
    rep(i,0,n)
    cin>>arr[i];
    ll ans=0;
    ans=nperm(arr,n);
    cout<<ans<<endl;
}

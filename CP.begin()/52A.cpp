#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        rep(i,0,n)
        {
            cin>>arr[i];
        }
        string str;
        cin>>str;
        // set<ll>s;
        int min=1000000;
        rep(i,0,n)
        {
            if(str[i]==0)
            {
                if(arr[i]<min)
                min=arr[i];
            }
            // cout<<str<<" ";
        }
        cout<<min<<endl;
    }
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(long long int i=a;i<b;i++)
int main()
{
    long long int n,m,i;
    cin>>n>>m;
    long long int a[n],b[m];
    rep(i,0,n)
    cin>>a[i];
    rep(i,0,m)
    cin>>b[i];
    long long int num1=0,num2=0,c=n-1;
    vector<long long int>ans;
    if(n<m)
    {
        int ct=0,c=m-1,num1=0;
        rep(i,0,m)
        {
            num1+=pow(10,c)*b[i];
            c--;
        }
        for(i=n-1;i>=0;i--)
        {
            ans.push_back(pow(10,ct)*a[i]*num1);
            ct++;
        }
        //cout<<num1<<" ";
    }
    else
    {
        long long int ct=0,c=n-1,num1=0;
        rep(i,0,n)
        {
            num1+=pow(10,c)*a[i];
            c--;
        }
        for(i=m-1;i>=0;i--)
        {
            ans.push_back(pow(10,ct)*b[i]*num1);
            ct++;
        }
        // cout<<num1<<" ";
    }
    // cout<<endl;
    long long int sum=0;
     for(auto x:ans){
     sum+=x;
    }
    
    cout<<sum<<endl;
}
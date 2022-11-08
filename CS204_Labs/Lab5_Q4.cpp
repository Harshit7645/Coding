#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    rep(i,0,n)
    cin>>a[i];
    rep(i,0,m)
    cin>>b[i];
    int num1=0,num2=0,c=n-1;
    rep(i,0,n)
    {
        num1+=pow(10,c)*a[i];
        c--;
    }
    c=m-1;
    rep(i,0,m)
    {
        num2+=pow(10,c)*b[i];
        c--;
    }
    cout<<num1-num2<<"\n";
}
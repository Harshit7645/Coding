#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    //map<int,int>m;
    map<int,int>m;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i][j]==1){
            m[i]++;
            m[j]++;
            }
        }
    }
    int ans=0;
    vector<int>v;
    for(auto x:m)
    {
        if(x.second%2!=0)
        {
            v.push_back(x.first);
        }
    }
    vector<int>req(v.size(),0);
    for(i=0;i<v.size();i++)
    {
        if(req[i]==0){
        for(j=i+1;j<v.size();j++)
        {
            if(arr[v[i]][v[j]]==0 ||arr[v[j]][v[i]]==0)
            {
                ans++;
                req[i]++;
                req[j]++;
            }
        }
        }
    }
    int flag=0;
    for(auto x:req)
    {
        if(x==0)
        flag=1;
    }
    
    if(flag==0)
    cout<<ans<<endl;
    else
    cout<<"-1\n";
    // for(auto x:m)
    // cout<<x.first<<" "<<x.second<<"\n";
    // cout<<"\n";
    // for(auto x:v)
    // cout<<x<<" ";
    // for(auto x:req)
    // cout<<x<<" ";
}
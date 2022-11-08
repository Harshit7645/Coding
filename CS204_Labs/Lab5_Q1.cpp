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
    sort(v.begin(),v.end());
    if(v.size()==0)
    cout<<"-1\n";
    else{
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<endl;
    }
}
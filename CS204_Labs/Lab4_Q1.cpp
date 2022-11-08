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
    int f=0;
    for(auto x:m)
    {
        if(x.second%2!=0)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    cout<<"false\n";
    else
    cout<<"true\n";
}
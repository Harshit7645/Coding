#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;//input a number
    cin>>n;
    char ch;
    map<int,int>m;
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            arr[i][j]=0;
        }
    }
    ch='\0';
    for(i=0;i<n;i++)
    {
        cin>>ch;
        while(ch!='#')
        {
            if(ch!='#' && ch!=(char)(i+48)){
            m[i]++;
            arr[i][(int)(ch)-48]=1;
            }
            cin>>ch;
        }
    }
    map<int,int>ml;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i][j]==1){
            ml[i]++;
            ml[j]++;
            }
        }
    }
    vector<int>v;
    for(auto x:ml)
    {
        if(x.second%2!=0)
        {
            v.push_back(x.first);
        }
    }
    sort(v.begin(),v.end());
    if(v.size()==0)
    cout<<"-1\n";
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<"\n";
}
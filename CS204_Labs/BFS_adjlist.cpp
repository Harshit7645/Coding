#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void BFS(int n)
{
    
}
int main()
{
    int n,i,j;//input a number
    cin>>n;
    char ch;
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            arr[i][j]=0;
        }
    }
    int vis[n];
    for(i=0;i<n;i++)
    {
        vis[i]=0;
    }
    ch='\0';
    for(i=0;i<n;i++)
    {
        if(vis[i]==1)
        continue;
        if(vis[i]==0){
        cout<<i<<" ";
        vis[i]=1;
        }
        cin>>ch;
        while(ch!='#')
        {
            if(ch!='#' && ch!=(char)(i+48) && vis[(int)ch-48]==0){
                cout<<ch<<" ";
                vis[(int)ch-48]=1;
            }
            cin>>ch;
        }
    }

    // vis[0]=1;
    // cout<<0<<" ";
    // int f=0;
    // for(i=0;i<n;i++)
    // {
    //     f=0;
    //     for(j=i+1;j<n;j++)
    //     {
    //         if(arr[i][j]==1 && vis[j]==0)
    //         {
    //             f=1;
    //             cout<<j<<" ";
    //             vis[j]=1;
    //         }
    //     }
    //     if(f==0 && vis[i]==0){
    //     cout<<i<<" ";
    //     vis[i]=1;
    //     }
    // }
    
}
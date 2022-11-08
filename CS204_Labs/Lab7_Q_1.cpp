#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int main()
{
    int n,x,y;
    cin>>n;
    int ans=n;
    // map<int,set<int>>m;
    int arr[n][n];
    int c=0;
    rep(i,0,n)
    {
        cin>>x>>y;
        arr[x][y]=1;
        arr[y][x]=1;
        rep(j,0,n)
        {
            rep(k,0,n)
            {
                if(arr[j][k]==1)
                {
                    
                }
            }
        }
    }
    //cout<<ans<<endl;
}
#include <bits/stdc++.h>
using namespace std;
void dfs(int x,int n ,int*a,bool*b)
{
    if(b[x]==false)
    {
        b[x]=true;
        for (int i = 0; i < n; i++)
        {
            if(*(a+x*n+i)==1 && b[i]==false)
            {
                dfs(i,n,a,b);
            }
        }
    } 
}
int main ()
{
    int n;
    char ip1,ip2;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j]=0;
        }
        
    }
    while (1)
    {
        int sum =0,j=0;
        bool b[n];
        for (int i = 0; i < n; i++)
        {
            b[i]=false;
        }
        cin >> ip1 ;
        if(ip1=='$')
        {break;}
        cin >> ip2;
        int c,d;
        c=ip1-'1',d=ip2-'1';
        arr[c][d]=1,arr[d][c]=1;
        while (j<n)
        {
            if(b[j]==false)
            {
                dfs(j,n,&arr[0][0],b); 
                sum++;
            }
            j++;
        }
        cout << sum <<endl;
        
    }
}
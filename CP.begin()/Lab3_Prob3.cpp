#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    f*=i;
    return f;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int req,i;
    cin>>req;
    for(i=0;i<n;i++)
    cin>>arr[i];
    int f=0,temp=n-1,l;
    for(l=1;l<req;l++)
    {
        f=0;
        for(i=n-1;i>0;i--)
        {
            if(arr[i-1]<arr[i])
            {
                f=1;
                temp=i-1;
                break;
            }
        }     
        if(f==0)
        break;
        else{
            for(i=n-1;i>=temp;i--)
            {
                if(arr[i]>arr[temp]){
                swap(arr[temp],arr[i]);
                break;}
            }
            reverse(arr+temp+1,arr+n);
        }
    }
    if(req>=1 && req<=fact(n)){
    for(i=0;i<n;i++)
    cout<<arr[i]<<"\n";
    }
    else
    cout<<"-1\n";
}

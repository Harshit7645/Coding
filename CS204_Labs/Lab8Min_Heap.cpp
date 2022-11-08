#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define PNO cout<<"NO\n"
#define PYES cout<<"YES\n"
using namespace std;
void buildminheap(int a[],int n);
void heapify(int a[],int i,int n);
map<int,int>m1,m2;
void buildminheap(int a[],int n)
{
    for(int i=n/2;i>=0;i--)
    {
        heapify(a,i,n);
    }
}
void heapify(int a[],int i,int n)
{
    int min=0,left=2*i,right=2*i+1;
    if(left<n && a[left]<a[i])
    min=left;
    else
    min=i;
    if(right<n && a[right]<a[min])
    min=right;
    if(min!=i)
    {
        swap(a[min],a[i]);
        heapify(a,min,n);
    }
}   
int main()
{
    int i,n;
    cin>>n;
    int x[n],y[n],d[n];
    rep(i,0,n)
    {
        cin>>x[i]>>y[i];
        d[i]=x[i]*x[i] + y[i]*y[i];
        m1[d[i]]=x[i];
        m2[d[i]]=y[i];
    }
    buildminheap(d,n);
    int t=n;
    for(i=n-1;i>=1;i--)
    {
        swap(d[i],d[0]);
        n--;
        heapify(d,0,n);

    }
    for(i=t-1;i>=0;i--)
    {
        cout<<m1[d[i]]<<" "<<m2[d[i]]<<"\n";
    }
}

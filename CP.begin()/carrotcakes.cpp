#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define PNO cout<<"NO\n"
#define PYES cout<<"YES\n"
using namespace std;
int main()
{
    int n,t,k,d;
	cin>>n>>t>>k>>d;
	int cur=(n+k-1)/k*t;
	int tt=cur-1;
	int cnt=tt/t*k;
	if(tt>=d) 
    cnt+=(tt-d)/t*k; 
	if(cnt>=n) 
    PYES;
    else 
    PNO;
	return 0;
}

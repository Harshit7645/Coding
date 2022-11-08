#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;//input a number
    cin>>n;
    char ch;
    map<int,int>m;
    j=0;
    ch='\0';
    for(i=0;i<n;i++)
    {
        cin>>ch;
        while(ch!='#')
        {
            if(ch!='#' && ch!=(char)(i+48))
            m[i]++;
            cin>>ch;
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
        //cout<<x.first<<" "<<x.second<<" \n";
    }
    cout<<endl;
    if(f==1)
    cout<<"false\n";
    else
    cout<<"true\n";

}
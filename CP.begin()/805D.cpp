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
    ll t;
    cin>>t;
    while(t--)
    {
        string s,w;
        cin>>s;
        w=s;
        ll p,n,init=0;
        cin>>p;
        n=s.length();
        sort(w.begin(),w.end());
        reverse(w.begin(),w.end());
        map<char,ll>m;
        rep(i,0,n)
        {
            init+=(int)s[i]-96;
        }
        //cout<<init<<endl;
        if(init<=p)
        cout<<s<<endl;
        else
        {
            string t;
            rep(i,0,n)
            {
                if(init-((int)w[i]-96)<=p)
                {
                    t=w.substr(i+1,n-i);
                    break;
                }
                else
                init=init-((int)w[i]-96);
            }
            n=t.length();
            rep(i,0,n)
            {
                m[t[i]]++;
            }
            n=s.length();
            rep(i,0,n)
            {
                if(m[s[i]]>0)
                {
                    cout<<s[i];
                    m[s[i]]--;
                }
            }
            cout<<endl;
        }
    }
}

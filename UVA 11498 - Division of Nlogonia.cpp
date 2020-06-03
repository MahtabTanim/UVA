#include <bits/stdc++.h>

using namespace std;
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

long long  num[100001];


long long extra,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;

int main()
{
    while(cin>>t && t)
    {
        cin>>n>>m;
        while(t--)
        {
            cin>>a>>b;
            a-=n, b-=m;
            string ans="";
            if(a>0)
            {
                if(b>0)
                    ans="NE";
                else if(b<0)
                    ans="SE";
            }
            else if(a<0)
            {
                if(b>0)
                    ans="NO";
                else if(b<0)
                    ans ="SO";
            }
            if(a&&b)cout<<ans<<endl;
            else cout<<"divisa\n";
        }
    }
    return 0;
}

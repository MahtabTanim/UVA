#include <bits/stdc++.h>
using namespace std;
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


long long  t,n,m,a,q,b,l,r,tcase=0;
string s;
int main()
{
    
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        a-=2;
        b-=2;
        if(a%3) a=a/3+1;
        else a=a/3;
        if(b%3) b=b/3+1;
        else b=b/3;
        long long ans=a*b;
        cout<<ans<<endl;
    }
   
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;

int main()
{
    while(cin>>t)
    {
        long long  count =0;
        while(t!=1)
        {
            count+=t/2;
            t=t/2+t%2;
        }
        cout<<count<<endl;
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        n=n*315 +36962;
        n=(n/10)%10;
        if(n<1) n*=(-1);
        cout<<n<<endl;
    }
    return 0;
}

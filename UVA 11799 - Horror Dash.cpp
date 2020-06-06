#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
string s="";

long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;

int main()
{
    cin>>t;
    while(t--)
    {
        int k,i ;
        cin>>k;
        int ma=0;
        while(k--)
        {
            cin>>i;
            ma=max(i,ma);
        }
        cout<<"Case "<<++tcase<<": "<<ma<<endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define N 1378
#define maxn 1000000
#define FP ff.open("output.txt")
#define FR ff.open("output.txt")
fstream ff;

ll a,q,b,c,d,k,h,e,f,t,m,n,i,j,x,y,count,tcase=0,l,r;
string s1,s2,s;



int main()
{   
    FP;
    vector<ll> num;
    while(cin>>a)
    {
        num.pb(a);
        int n = num.size();
        sort(num.begin(),num.end());
        if(n%2==0) {
            x = num[(n-1)/2] + num[n/2];
            x = x/2;
            cout<<x<<endl;
        }else {
            x = num[(n-1)/2];
            cout<<x<<endl;
        }

    }
    return 0;
}


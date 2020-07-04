#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define N 101
#define maxn 1000000
#define FP ff.open("output.txt")
fstream ff;

ll a,b,c,d,k,h,e,f,t,m,n,i,j,x,y,count,tcase=0,l,r;
string s1,s2,s;

ll gcd(ll a, ll b)
{
    while(true)
    {
        if(!a || ! b) return (a>b)?a:b;
        if(b%a==0) return a;
        c=b%a;
        b=a;
        a=c;
    }
}

int main()
{
    FP;
    while(cin>>n && n)
    {
        vector<ll> v(n);
        int count = 0;
        for(int i = 0; i<n; i++) cin>>v[i];
        for(int i = 0; i<n; i++)
        {
            for(int j = i+1; j<n; j++)
            {
                if(gcd(v[i],v[j])==1) count++;
            }
        }
        if(count==0) cout<<"No estimate for this data set.\n";
        else
        {
            n=(n*(n-1))/2;
            double x = (n*6)/(double) count;
            x=sqrt(x);
            cout<<fixed<<setprecision(6)<<x<<endl;
        }
    }
    return 0;
}

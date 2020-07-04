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
    ll a,b,G=0;
    while(cin>>a && a){
        G=0;
        while(cin>>b && b){
            G=gcd(fabs(a-b),G);
            a=b;
        }
        if(G<0) G*=-1;
        cout<<G<<endl;
    }
    return 0;
}

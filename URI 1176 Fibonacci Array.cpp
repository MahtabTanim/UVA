// Written By Mahtab Tanim
#include<bits/stdc++.h>
using namespace std;
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl "\n"
#define End return 0
#define ll long long int
#define mp make_pair
#define pb push_back
#define ull unsigned long long int
#define pi acos(-1)
#define forn(i,a,b) for (int i=a;i<=b;i++)
#define size 65
ull fib[size];
ull f(void)
{
    fib[0]=0;
    fib[1]=1;
    for(int i=2; i<=60; i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
}
int main()
{
    f();
    int t,c=0;
    cin>>t;
    ull n,res;
    while(t--)
    {
        cin>>n;
        res= fib[n];
        cout<<"Fib("<<n<<") = "<<res<<endl;
    }

    End;
}

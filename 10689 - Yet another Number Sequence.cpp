#include<bits/stdc++.h>
using namespace std;
//#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define maxn 1000000
#define FP ff.open("output.txt")
fstream ff;
#define N 101
ll a,b,c,d,k,h,e,f,t,m,n,i,j,x,y,count,tcase=0,l,r;
string s1,s2,s;
ll I[3][3], T[3][3], mod = 1;

void MUL(ll A[3][3],ll B[3][3])
{
    ll RES[3][3];
    for(int i = 1; i<=2; i++)
    {
        for(int j = 1; j<=2; j++)
        {
            RES[i][j]=0;
            for(int k = 1; k<=2; k++)
            {
                ll a = (A[i][k] * B[k][j])%mod;
                RES[i][j]= (a+RES[i][j])%mod;
            }
        }
    }
    for(int i = 1; i<=2; i++)
    {
        for(int j =1; j<=2; j++)
        {
            A[i][j]=RES[i][j];
        }
    }
}

void POW(int n)
{
    I[1][1]=1,I[2][2]=1;
    I[1][2]=0,I[2][1]=0;
    T[1][1]=0;
    T[1][2]=T[2][1]=T[2][2]=1;
    while(n)
    {
        if(n%2)
        {
            MUL(I,T);
            n--;
        }
        else
        {
            MUL(T,T);
            n= n/2;
        }
    }
    for(int i = 1; i<=2; i++)
    {
        for(int j =1; j<=2; j++)
        {
            T[i][j]=I[i][j];
        }
    }
}
int main()
{
    FP;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n>>m;
        n++;
        mod =(ll)pow(10,m);
        if(n==1)
        {
            cout<<a%mod<<endl;
        }
        else if(n==2)
        {
            cout<<b%mod<<endl;
        }
        else
        {
            POW(n-1);
            ll x = a*T[1][1]% mod+b*T[2][1]%mod;
            cout<<x%mod<<endl;
        }
    }
    return 0;
}

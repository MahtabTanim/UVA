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
#define i64 long long
long long  F(long long N,long long P,long long M)
{
	if(P==0) return 1;
	if(P%2==0)
	{
		long long  ret=F(N,P/2,M);
		return ((ret%M)*(ret%M))%M;
	}
	else return ((N%M)*(F(N,P-1,M)%M))%M;

}
int main()
{
int b,p,m;
string s;
while(cin>>b>>p>>m)
{
    cout<<F(b,p,m)<<endl;
}
End;
}

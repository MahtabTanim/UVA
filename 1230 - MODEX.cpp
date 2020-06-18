#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//#define mod 1000000007
#define ll long long 
fstream ff;

//2 2147483647 13

ll a,b,c,d,e,f,count,n,m,k,i,j,t,mod;
string s;

ll P(ll  n , ll m)
{
	if(m==1) return n%mod;
	if(m%2==0)
	{
		ll d=P(n,m/2);
		return (d%mod * d%mod) % mod;
	}
	return (n%mod * P(n,m-1)%mod)%mod;
}

int main()
{
	while(cin>>t && t)
	{
		while(t--)
		{
			ll n,m;
			cin>>n>>m>>mod;
			cout<<P(n,m)<<endl;
		}
	}
return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define maxn 1000000
#define FP ff.open("output.txt")
fstream ff;    

ll a,b,c,d,k,e,f,t,m,n,i,j,x,y,count,tcase=0;
string s;

bool status[1000001];
vector<ll>primes;

void sieve()
{
	for(int i=2;i*i<=maxn;i++)
	{
		if(status[i]==0)
		{
			for(int j=i*i;j<=maxn;j+=i) status[j]=true;
		}
	}
	primes.pb(2);
	for(int i=3;i<=maxn;i+=2)
	{
		if(status[i]==false) primes.pb(i);
	}
}

int main()
{
	sieve();
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		int k=0;
		int count=0;
		for(int i=0;i<primes.size();i++)
		{
			ll x=primes[i];
			while(x*primes[i]<=b)
			{
				if(x*primes[i]>=a && x*primes[i]<=b) count++;
				x=x*primes[i];
			}
		}
		cout<<count<<endl;
	}
  return 0;
}

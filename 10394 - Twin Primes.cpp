#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define ll long long 
fstream ff;

ll a,b,c,d,e,f,count,n,m,k,i,j,t;
string s;

bool status[20000001];
vector<int>primes;

void sieve()
{
	int n=20000000;
	for(int i=3;i*i<=n;i=i+2)
	{
		if(status[i]==0)
		{
			for(int j=i*i;j<=n;j=j+i) status[j]=true;
		}
	}
	primes.pb(2);
	for(int i=3;i<=n;i+=2) if(status[i]==false) primes.pb(i);
	
}
int main()
{
	sieve();
	vector< pair<int,int> > prime_pairs;
	
	for(int i=1;i<primes.size();i++) {
		if(primes[i]-2 == primes[i-1])
		{
			prime_pairs.pb(mp(primes[i-1],primes[i]));
		}
	}
	while(cin>>k)
	{
		printf("(%d, %d)\n",prime_pairs[k-1].first,prime_pairs[k-1].second);
	}
return 0;
}

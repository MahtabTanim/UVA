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

vector<int > primes;

bool status[1000001];

void sieve()
{
	int n= 1000000;
	for(int i=2;i*i<=n;i++)
	{
		if(status[i]==0)
		{
			for(int j= i*i;j<=n;j+=i) status[j]=1;
		}
	}
	for(int i=2;i<=n;i++) if(status[i]==0)primes.pb(i);
}

void search(int * l, int * r, int q)
{
	int lo=0,hi=primes.size()-1,a=-1,b=-1;
	while(lo<=hi)
	{
		ll sum=primes[lo]+ primes[hi];
		if(sum==q){
			a=lo,b=hi;
			break;
		}
		else if(sum>q) hi--;
		else lo++;
	}
	*l = a, *r = b;
}

int main()
{
	sieve();
	while(cin>>n,n)
	{
		int l,r;
		search(&l,&r,n);
		if(l==-1 && r==-1) cout<<"Goldbach's conjecture is wrong.\n";
		else cout<<n<<" = "<<primes[l]<<" + "<<primes[r]<<endl;
	}
return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define ll long long 
fstream ff;

vector<int> vi;

bool status [1000001];
void sieve()
{
	int n=1000000;
	status[1]=1;
	for(int i=2;i*i<=n;i++)
	{
		if(status[i]==0)
		{
			for(int j = i*i ; j <= n ; j+=i)
			{
				status [j] = 1;
			}
		}
	}
	for(int i=2;i<=n;i++) if( status [i] == 0) vi.pb(i);
}

void findpair(int * l , int * r , int q)
{
	int lo=0, hi=vi.size()-1,a=-1,b=-1;
	while(lo<=hi)
	{
		int sum = vi[lo] + vi[hi];
		if( sum == q ){
			a=lo,b= hi;
			break;
		}
		else if( sum > q) hi--;
		else lo ++ ;
	}
	*l =a, *r =b;
}

ll a,b,c,d,e,f,count,n,m,k,i,j,t;
string s;

int main()
{
	
	sieve();
	int n,c=0;
	while(cin>>n , n)
	{
		cout<<n<<":\n";
		int l , r ;
		findpair(&l,&r,n);
		if(l==-1 && r==-1 ) cout<<"NO WAY!";	
		else cout<<vi[l]<<"+"<<vi[r];
		cout<<"\n";
	}
return 0;
}

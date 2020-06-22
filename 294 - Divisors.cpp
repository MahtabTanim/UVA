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

ll a,b,c,d,k,e,f,t,m,n,i,j,x,y,count;
string s;
ll div(ll n)
{
	ll count=1;
	for(i=2;i*i<=n;i++)
	{
		int c=0;
		while(n%i==0)
		{
			c++;
			n/=i;
		}
		count*=(c+1);
	}
	if(n>1) count*=2;
	return count;
}

int main()
{
	FP;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		ll ans=0,number = a,x=a;
		while(a<=b)
		{
			if(div(a)>ans)
			{
				ans = div(a);
				number = a;
			}
			a++;
		}
		cout<<"Between "<<x<<" and "<<b<<", "<<number<<" has a maximum of "<<ans<<" divisors.\n";
	}
  return 0;
}

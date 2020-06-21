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

ll gcd(ll a, ll b)
{
	if(b%a==0) return a;
	return gcd(b%a,a);
}

ll lcm(ll a,ll b)
{
	if(a>b) swap(a,b);
	if(b%a==0) return b;
	return (a*b)/gcd(a,b);
}  

int main()
{
	FP;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll product = n*m;
		bool status = false;
		for(ll i=n;i*i<=product;i++)
		{
			if (product%i==0) 
			{
				if(gcd(i,product/i)== n && lcm(i,product/i)==m)
				{
					cout<<i<<" "<<product/i<<endl;
					status = true;
					break;
				}	
			}
		}
		if(status==false )cout<<-1<<endl;
	}
   return 0;
}

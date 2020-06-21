#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define maxn 1000000
fstream ff;    
ll a,b,c,d,k,e,f,t,m,n,i,j,x,y,count;
int gcd(int a, int b)
{
	if(b%a==0) return a;
	return gcd(b%a,a);
}
   
int main()
{
	while(cin>>n,n)
	{
		int g=n,sum=0,i=0;
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<=n;j++) sum+=gcd(i,j);
		}
		cout<<sum<<endl;
	}
   return 0;
}

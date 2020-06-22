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
ll gcd(ll a, ll b)
{
	if(b==0) return a;
	return gcd(b,a%b);
}

int main()
{
	FP;
	cin>>t;
	ll A[101];
	getchar();
	while(t--)
	{
		
		getline(cin,s);
		
		int n=0;
		
		stringstream ss(s);
		
		while(ss>>A[n]) ++n;
		
		ll ans=0;
		
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				ans = max(gcd(A[j],A[i]),ans);
			}
		}
		
		cout<<ans<<endl;
	}
  return 0;
}

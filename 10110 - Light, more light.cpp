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

int main()
{
	FP;
	while(cin>>n,n)
	{
		double sq=sqrt(n);
		ll s=sq;
		if(s*s==n && s==sq) cout<<"yes\n";
		else cout <<"no\n";
	}
  return 0;
}

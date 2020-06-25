#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int 
#define maxn 1000000
#define FP ff.open("output.txt")
fstream ff;    
ll a,b,c,d,k,h,e,f,t,m,n,i,j,x,y,count,tcase=0;
string s;

int main()
{
	FP;
	while(cin>>n and n)
	{
		bool win =false;
		ll ans =0, points = 0;
		while(n--)
		{
			cin>>a;
			points += a;
			ans = max(ans,points);
			if(points<0) points=0;
		}
		if(ans==0) cout<<"Losing streak.\n";
		else cout<<"The maximum winning streak is "<<ans<<"."<<endl;
	}
  return 0;
}

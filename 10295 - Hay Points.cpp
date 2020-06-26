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
	cin>>n>>m;
	map<string,ll> M;
	while(n--){
		cin>>s>>a;
		M[s]+=a;
	}
	MP;
	int c =0;
	ll sum =0;
	while(getline(cin,s))
	{
		if(s==".") {
			cout<<sum<<endl;
			sum=0;
			c++;
			if(c==m) break;
		}
		stringstream ss(s);
		while(ss>>s) sum+=M[s];
	}
  return 0;
}

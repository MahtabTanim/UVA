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
	vector<ll>v;
	map<ll,ll> M;
	while(cin>>a) {
		M[a]++;
		if(M[a]==1) v.pb(a);
	}
	for(auto& i:v){
		cout<<i<<" "<<M[i]<<endl;
	}
  return 0;
}

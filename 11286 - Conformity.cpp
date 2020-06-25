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
	while(cin>>n,n)
	{
		map<vector<int>,int> ma;
		int max =0;
		while(n--){
			vector<int> v;
			for(i =0;i<5;i++) {
				cin>>j;
				v.pb(j);
			}
			sort(v.begin(),v.end());
			ma[v]++;
			if(ma[v]>max) max =ma[v];
		}
		int count = 0;
		for(auto& i:ma){
			if(i.second==max) count+=i.second;
		}
		cout<<count<<endl;
	}
  return 0;
}

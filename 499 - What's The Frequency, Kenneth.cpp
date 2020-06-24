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

ll a,b,c,d,k,e,f,t,m,n,i,j,x,y,count,tcase=0;
string s;

int main()
{
	MP;
	while(getline(cin,s))
	{
		map<char,int> ma;
		int m=0;
		for(int i =0;i<s.length();i++)
		{
			if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122)ma[s[i]]++;
			if(ma[s[i]]>m) m = ma[s[i]];
		}
		for(auto e = ma.begin();e!=ma.end();e++)
		{
			if(e->second==m) cout<<e->first;
		}
		cout<<" "<<m<<endl;
	}
  return 0;
}

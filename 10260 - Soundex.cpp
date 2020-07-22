#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define N 1378
#define maxn 1000003
#define FP ff.open("output.txt")
#define FR ff.open("output.txt")
fstream ff;

ll a,q,b,c,d,k,h,e,f,t,m,n,i,j,x,y,count,tcase=0,l,r;
string s1,s2,s;

void As(map<char,int> &M,string z, int k)
{
	for(int i = 0;i<z.size();i++) M[z[i]]=k;
}

int main() {
	FP;
	map<char,int> M;
	string z ="AEIOUHWY";
	As(M,z,0);
	z="BFPV";
	As(M,z,1);
	z="CGJKQSXZ";
	As(M,z,2);
	z="DT";
	As(M,z,3);
	M['L']=4;
	M['M']=M['N']=5;
	M['R']=6;
	while(cin>>s)
	{
		string res = "";
		for(int i = 0;i<s.size();i++)
		{
			if(M[s[i]]==M[s[i+1]]) continue;
			if(M[s[i]])
			{
				res.pb(M[s[i]]+48);
			}
		}
		cout<<res<<endl;
	}
	return 0;
}

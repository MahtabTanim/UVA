#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
fstream ff;

long long extra,x,y,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0,l,r;


string s;

string words[16] = { "Happy", "birthday", "to" ,"you",
											"Happy", "birthday", "to" ,"you",
											"Happy", "birthday", "to" ,"Rujia",
											"Happy", "birthday", "to" ,"you"
											};

int main()
{
	//ff.open("output.txt");
	cin>>n;
	string s1;
	vector<string> vs;
	for(int i=0;i<n;i++)
	{
		cin>>s1;
		vs.pb(s1);
	}
	int count=0,i=0,j=0;
	
	while(count%16 || i<n-1)
	{
		cout<<vs[i%n]<<": "<<words[j%16]<<endl;
		count++,i++,j++;
	}
	
return 0;
}

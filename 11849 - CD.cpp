#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
fstream ff;
long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;
string s;
int main()
{	
	//ff.open("output.txt");
	string s1;
	while(cin>>n>>m,n,m)
	{		
		map<long long,int> s1;
		while(n--)
		{
			cin>>k;
			s1[k]++;
		}
		long long count=0;
		while(m--)
		{
			cin>>k;
			if(s1[k]) 
			{
				count++;
				s1[k]==0;
			}
		}
		cout<<count<<endl;
	}
    return 0;
}

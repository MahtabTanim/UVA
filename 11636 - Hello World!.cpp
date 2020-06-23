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

ll a,b,c,d,k,e,f,t,m,n,i,j,x,y,count,tcase=0;
string s;

int main()
{
	while(cin>>n && n>=1)
	{
		int count = 0 , lines=1;
		while(lines<n) 
		{
			lines*=2,count++;
		}
		cout<<"Case "<<++tcase <<": "<<count<<endl;
	}
  return 0;
}

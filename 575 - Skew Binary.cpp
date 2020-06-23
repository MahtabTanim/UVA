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
	while(cin>>s)
	{
		if(s=="0") break;
		ll sum=0;
		reverse(s.begin(),s.end());
		for(int i=0,j=1;i<s.length();i++,j++)
		{
			sum += (s[i]-48)*((1<<j)-1); 
		}
		cout<<sum<<endl;
	}
  return 0;
}

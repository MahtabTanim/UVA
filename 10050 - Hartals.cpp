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

int main() {
	cin>>t;
	while(t--)
	{
		cin>>n;
		bool status[n+1]={false};
		cin>>k;
		while(k--)
		{
			cin>>a;
			for(int i = 1;i<=n;i++)
			{
				if(!(i%7==0 || i%7==6 ) && i%a==0) status[i]=true;
			}
		}
		j= 0;
		for(int i = 1;i<=n;i++)
		{
			if(status[i]) j++;
		}
		cout<<j<<endl;
	}
	return 0;
}

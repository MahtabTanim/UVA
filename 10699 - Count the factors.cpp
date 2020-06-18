#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define ll long long 
fstream ff;

int main()
{
	int n;
	while(cin>>n && n)
	{
		int i,count=0,k=n;
		for( i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				count++;
				while(n%i==0)
				{
					n=n/i;
				}
			}
		}
		if(n>1) count++;
		cout<<k<<" : "<<count<<endl;
	}
return 0;
}

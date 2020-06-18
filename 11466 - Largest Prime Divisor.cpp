#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define ll long long 

int main()
{
	long long n;
	while(cin>>n && n)
	{
		if(n<0) n=n*(-1);
		ll i,ans=1,t=n,count=0;
		for( i=2;i*i <= n && n!=1;i++)
		{
			if(n%i==0)
			{
				ans=max(ans,i);
				count++;
				while(n%i==0) n=n/i;
			}
		}
		if(n>1) ans=max(ans,n),count++;
		if(count<=1) cout<<-1<<endl;
		else cout<<ans<<endl;
	}
return 0;
}

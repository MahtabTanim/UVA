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
	ff.open("output.txt");
	long long n;
	while(cin>>n && n>=0)
	{
		ll i;
		for( i=2;i*i <= n && n!=1;i++)
		{
			if(n%i==0)
			{
				while(n%i==0) 
				{
					cout<<"    "<<i<<endl;
					n=n/i;
				}
			}
		}
		if(n>1) cout<<"    "<<n<<endl;
		cout<<endl;
	}
return 0;
}

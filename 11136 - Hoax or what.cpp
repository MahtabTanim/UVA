#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define size 1000002

int cou[size];
long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;

string s;
int main()
{	
	while(cin>>n , n)
	{	set<int> myset;
		long long sum=0;
		memset(cou,0,size);
		for(int i=1;i<=n;++i)
		{
			cin>>k;
			while(k--)
			{
				cin>>a;
				cou[a]++;
				myset.insert(a);
			}
			
			int mi,ma;
			mi=*myset.begin();
			ma=*--myset.end();
			
			sum+=(ma-mi),cou[ma]--,cou[mi]--;
			
			if(cou[mi]==0) myset.erase(mi);
			if(cou[ma]==0) myset.erase(ma);
		}
		cout<<sum<<endl;
	}
    return 0;
}

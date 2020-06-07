#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
fstream ff;
string s="";

long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;
int main()
{
    while(cin>>n ,n)
  {
    	int x=0,y=0;
    	while(n--)
    	{
    		cin>>j;
    		if(j) x++;
    		else y++;
		  }
		cout<<"Case "<<++tcase<<": "<<x-y<<endl;
	}
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
string s="";

long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;
int main()
{
    cin>>t;
    while(t--)
    {
    	cin>>s;
    	int len=s.length();
    	if(len==3)
    	{
    		string s1="one";
    		int d1=0;
    		for(int i=0;i<len;++i)
    		{
    			if(s[i]!=s1[i]) d1++;
			}
			if(d1<=1) cout<<1<<endl;
			else cout<<2<<endl;
		}
    	else
		{
    		cout<<3<<endl;	
		}
	}
	
    return 0;
}

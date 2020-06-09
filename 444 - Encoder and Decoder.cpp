#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007

long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;
string s;
string reverse(string s)
{
	int len=s.length();
	for(int i=0;i<len/2;i++)
	{
		swap(s[i],s[len-i-1]);
	}
	return s;
}

int main()
{	

	MP;
	while(getline(cin,s))
	{
		s=reverse(s);
		int len=s.length();
		string res="";
		for(int i=0;i<len;i++)
		{
			int temp=0;
			if(s[i]>=48 && s[i]<=57)
			{
		
			if(s[i]=='1')
				{
				temp=(s[i]-48)*100+(s[i+1]-48)*10 + (s[i+2]-48);
				res.pb(temp);
				i+=2;
				}
			else
				{
				temp=(s[i]-48)*10+(s[i+1]-48);
				i++;
				res.pb(temp);
				}
			}
			else
			{
				temp=s[i];
				while(temp>0)
				{
					res.pb(48+temp%10);
					temp/=10;
				}
			}
		
		}
		cout<<res<<endl;
	}
    return 0;
}

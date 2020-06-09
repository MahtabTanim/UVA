#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
fstream ff;
long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;
string s;
int main()
{	
	//ff.open("output.txt");
	cin>>t;
	string s1;
	while(t--)
	{
		if(tcase) cout<<endl;
		MP;
		cin>>s;
		getline(cin,s1);
		s+=s1;
		int len=s.length();
		for(int i=1;i<=len;i++)
		{
			if(len%i==0)
			{
				bool status = true;
				for(int j=0;j<len-i;j++)
				{
					if(s[j]!=s[j+i]) status = false;
				}
				if(status) 
				{
					cout<<i<<endl;
					break;
				}
			}
		}
		
		++tcase;
	}
    return 0;
}

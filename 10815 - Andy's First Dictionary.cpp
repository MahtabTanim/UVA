#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007

set<string> di;

long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;

int main()
{
    set<string> :: iterator it;
	MP;
	string s;
    while(getline(cin,s))
    {	
        string s1="";
		int ll=s.length();
		
		for(int i=0;i<ll;++i)
		{
			int temp=s[i];
			if(!isalpha(temp))
			{
				if(s1!="")di.insert(s1);
				s1="";
			}
			else
			{
                s1.pb(tolower(temp));
			}
		}
		
		di.insert(s1);
	}
	
	it=di.begin();
	
	for(++it;it!=di.end();it++)
    {
        s=*it;
        cout<<s<<endl;
    }
    
    return 0;
}

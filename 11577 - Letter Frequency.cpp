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
		FP;
		cin>>t;
		getchar();
		while(t--)
		{
			getline(cin,s);
			int F[26]={0};
			int ma = -1,sz = s.size();
			for(int i = 0;i<sz;i++) 
			{
				if(s[i]>=97 && s[i]<=122 || s[i]>=65 && s[i]<=90) 
				{
					s[i]=tolower(s[i]);
					F[s[i]-97]++;
				}
			}
			for(int i = 0;i<26;i++)
			{
				ma = max(F[i],ma);
			}
			for(int i = 0;i<26;i++)
			{
				if(F[i]==ma) printf("%c",97+i);
			}
			cout<<endl;
		}
	return 0;
}

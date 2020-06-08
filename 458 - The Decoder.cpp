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
	ff.open("output.txt");
//	printf("%d %d\n",'*','1');
//	printf("%d %d\n",'J','C');
while(getline(cin,s))
{
	for(int i=0;i<s.length();++i) 
	{
		s[i]=s[i]-7;
		ff<<s[i];
	}
	ff<<endl;
}
    return 0;
}

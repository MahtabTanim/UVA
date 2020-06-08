#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007

long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;

string summ(string s1, string s2)
{
	string s="";
	int len1=s1.length(),len2=s2.length();
	if(len1<len2) swap(s1,s2);
	len1=s1.length(),len2=s2.length();
	int carry=0;
	int i,j;
	for( i=len2-1,j=len1-1;i>=0;i--,j--)
	{
		int temp=s2[i]+s1[j]-96+carry;
		carry=temp/10;
		s.pb((temp%10)+48);
	}
	while(j>=0)
	{
		int temp=s1[j]-48 +carry;
		carry=temp/10;
		s.pb((temp%10)+48);
		j--;
	}
	if(carry) s.pb(carry+48);
	reverse(s.begin(),s.end());
	return s;
}

string ss[5001];

int main()
{	
	ss[0]="0";
	ss[1]="1";
	for(int i=2;i<=5000;i++)
	{
		ss[i]=summ(ss[i-1],ss[i-2]);
	}
	while(cin>>n)
	{
		cout<<"The Fibonacci number for "<<n<<" is "<< ss[n]<<endl;
	}
    return 0;
}

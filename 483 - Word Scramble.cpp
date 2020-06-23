#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define maxn 1000000
#define FP ff.open("output.txt")
fstream ff;    

ll a,b,c,d,k,e,f,t,m,n,i,j,x,y,count,tcase=0;
string s;

bool status[1000001];
vector<ll>primes;

string reverse(string s)
{
	int len= s.length();
	for(int i=0;i<len/2;i++){
		swap(s[i],s[len-i-1]);
	}
	return s;
}

int main()
{
	//FP;
	MP;
	while(getline(cin,s))
	{
		string s1;
		stringstream ss(s);
		int count = 0;
		while(ss>>s1)
		{
			if(count) cout<<" ";
			s1 = reverse(s1);
			cout<<s1;
			count++;
		}
		cout<<endl;
	}
  return 0;
}

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

bool isprime(int n)
{
	if(n==1) return false;
	for(int i = 2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}

int main() {
		cin>>t;
		while(t--)
		{
			cin>>s;
			map<char,int> M;
			for(int i = 0;i<s.size();i++) M[s[i]]++;
			string res = "empty";
			for(auto& e : M)
			{
				if(isprime(e.second)) {
					if(res=="empty") res="";
					res.pb(e.first);
				}
			}
			cout<<"Case "<<++tcase<<": "<<res<<endl;
		}
	return 0;
}

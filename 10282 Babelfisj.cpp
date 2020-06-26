#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int 
#define maxn 1000000
#define FP ff.open("output.txt")
fstream ff;    
ll a,b,c,d,k,h,e,f,t,m,n,i,j,x,y,count,tcase=0;
string s;

int main()
{
	FP;
	map<string,string> M;
	int c =0;
	while(getline(cin,s))
	{
		string a,b;
		c=0;
		stringstream ss(s);
		while(ss>>a) c++;
		stringstream MM(s);
		if(c==2){
			MM>>a>>b;
			M[b]=a;
		} else break;
	}
	while(cin>>s)
	{
		if(M[s]=="") cout<<"eh"<<endl;
		else cout<<M[s]<<endl;
	}
  return 0;
}

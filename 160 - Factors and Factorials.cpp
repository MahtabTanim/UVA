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
string s1,s;

bool status[1001];

vector<int> P;

void sieve()
{
	for(int i =2;i*i<=1000;i++){
		if(status[i]==0){
			for(int j = i*i;j<=1000;j+=i) status[j]=1;
		}
	}
	for(int i =2;i<=1000;i++) if(status[i]==0) P.pb(i);
}

map<int,int>M;

void X(int n)
{
	for(int i = 2;i<=n;i++)
	{
		k=i;
		for(int j = 2 ;j*j <=k;j++){
			while(k%j==0){
				M[j]++;
				k/=j;
			}
		}
		if(k>1) M[k]++;
	}
}

int main()
{
	FP;
	sieve();
	while(cin>>n and n)
	{	
		M.clear();
		vector<int> res;
		X(n);
		for(int i =0;i<P.size()&&P[i]<=n ; i++){
			res.pb(M[P[i]]);
		}
		cout<<setw(3)<<n<<"! =";
		int count =0;
		for(int i =0;i<res.size();i++){
			if(i==15) cout<<endl<<"      ";
			cout<<setw(3)<<res[i];
		}
		cout<<endl;
	}
return 0;
}

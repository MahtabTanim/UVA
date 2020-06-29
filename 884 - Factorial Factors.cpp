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

#define N 1000000

int val[N+1];

int factors(int n){
	int count =0;
	for(int i =2;i*i<=n;i++){
		while(n%i==0){
			count++;
			n/=i;
		}
	}
	if(n>1) count++;
	return count;
}

void solve()
{
	val[2]=1;
	for(int i = 3;i<=N;i++){
		val[i]=val[i-1]+factors(i);
	}
}

int main()
{
	solve();
	while(cin>>n && n){
		cout<<val[n]<<endl;
	}
return 0;
}

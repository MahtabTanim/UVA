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


int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		int A[n],sum=0;
		for(int i = 0;i<n;i++){
			cin>>A[i];
			for(int j =0;j<i;j++){
				if(A[j]<=A[i]) sum++;
			}
		}
		cout<<sum<<endl;
	}
return 0;
}

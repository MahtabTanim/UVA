#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define N 1378
#define maxn 1000000
#define FP ff.open("output.txt")
#define FR ff.open("output.txt")
fstream ff;

ll a,q,b,c,d,k,h,e,f,t,m,n,i,j,x,y,count,tcase=0,l,r;
string s1,s2,s;
int main() {
	FP;
	cin>>t;
	while(t--) {
		cin>>s;
		string res = "", temp="";
		int c = 0 , l = s.size();
		for(int i = 0; i<l; i++) {
			if(s[i]>=48 && s[i]<=57) {
				c = c*10 + (s[i]-48);
			} else {
				for(int j = 0; j<c; j++) {
					res+=temp;
				}
				c= 0;
				temp = "";
				temp.pb(s[i]);
			}
		}
		for(int j = 0; j<c; j++) {
			res+=temp;
		}
		cout<<"Case "<<++tcase<<": "<<res<<endl;
	}
	return 0;
}

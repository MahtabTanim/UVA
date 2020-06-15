#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
fstream ff;
bool status[1001];
void sieve()
{
	int n=1000;
	status[2]=false;
	for(int i=4;i<=n;i+=2) status[i]=true;
	for(int i=3;i*i<=n;i++)
	{
		if(status[i]==false)
		{
			for(int j=i*2;j<=n;j+=i) status[j]=true;
		}
	}
}
long long extra,x,y,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0,l,r;
int coun=0;
void printset(set<int> st)
{
	int count=0;
	for(set<int> :: iterator i =st.begin(); i!=st.end();i++) 
	{
		if(count) cout<<" ";
		cout<<*i;
		count++;
	}
	cout<<endl;
}
string s;

int main()
{
	sieve();
	ff.open("output.txt");
	vector<int> vi;
	set<int> sp;
	while(cin>>n>>c)
	{
		for(int i=1;i<=n;i++)
		{
			if(!status[i])vi.pb(i);
		}	
		int count=c*2,sz=vi.size();
		if(sz%2) count--;
		int i=0;
		if(c*2<sz)while(count!=sz-(i*2)) i++;
		cout<<n<<" "<<c<<": ";
		for(int j=i;j<sz-i;j++) sp.insert(vi[j]);
		printset(sp);
		cout<<endl;
		sp.clear();
		vi.clear();
	}	
	
return 0;

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

int main()
{   
    FP;
    cin>>t;
    while(t--)
    {
        if(tcase) cout<<endl;
        MP;
        getline(cin,s);
        while (s.length()==0 ) getline(cin, s); 
        vector<int> p;
        vector<string> A;
        stringstream ss(s);
        while(ss>>a){
            p.pb(a);
        }
        getline(cin,s);
        stringstream AA(s);
        while(AA>>s){
            A.pb(s);
        }
        int n = p.size();
        vector<string> res ( n );
        for(int i = 0;i<n;i++){
            int x = p[i]-1;
            res[x] = A[i];
        } 
        for(int i = 0;i<n;i++)  cout<<res[i]<<endl;
            ++tcase;
    }
    return 0;
}

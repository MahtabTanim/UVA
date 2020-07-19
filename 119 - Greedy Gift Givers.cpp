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
    while(cin>>n)
    {
        if(tcase) cout<<endl;
        ++tcase;
        vector<string> vs;
        map<string , ll > M;
        for(int i = 0;i<n;i++){
            cin>>s;
            vs.pb(s);
            M[s]=0;
        }
        for(int i = 0;i<n;i++)
        {
            cin>>s>>a>>k;
            if(k>0) M[s] -= (a-a%k);
            for(j = 1;j<=k ; j++) {
                cin>>s;
                M[s] += a/k;
            }
        }
        for(int i = 0;i<n;i++ ){
            cout<<vs[i]<<" "<<M[vs[i]]<<endl;
        }
    }
    return 0;
}


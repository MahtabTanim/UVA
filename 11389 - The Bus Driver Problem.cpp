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
#define N 101
ll a,b,c,d,k,h,e,f,t,m,n,i,j,x,y,count,tcase=0,l,r;
string s1,s2,s;

int main()
{
    while(cin>>n>>d>>r)
    {
        if(!n && !d && !r) break;
        vector<int> M(n),E(n);
        for(int i = 0;i<n;i++) cin>>M[i];
        for(int i = 0;i<n;i++) cin>>E[i];
        sort(M.begin(),M.end());
        sort(E.begin(),E.end());
        reverse(E.begin(),E.end());
        ll sum = 0;
        for(int i = 0;i<n;i++){
            sum+=(M[i]+E[i]>d) ? (M[i]+E[i]-d)*r : 0;
        }
        cout<<sum<<endl;
    }
    return 0;
}

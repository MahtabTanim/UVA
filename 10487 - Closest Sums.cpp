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
string s1,s2;

int main()
{
    FP;
    while(cin>>n && n)
    {
        cout<<"Case "<<++tcase<<":"<<endl;
        vector<int> V(n);
        int ma=-1,mi=maxn;
        for(int i = 0;i<n ; i++) {
            cin>>V[i];
            ma=max(V[i],ma);
            mi=min(mi,V[i]);
        }
        cin>>m;
        while(m--){
            cin>>a;
            b=ma+mi;
            for(int i = 0;i < n;i++){
                for(int j = i+1;j<n;j++){
                   if(abs(a-b)>abs(a-(V[i]+V[j]))){
                        b=V[i]+V[j];
                   }
                }
            }

            cout<<"Closest sum to "<<a<<" is "<<b<<".\n";
        }
    }
    return 0;
}

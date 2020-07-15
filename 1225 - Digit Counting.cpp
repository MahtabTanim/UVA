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
        cin>>n;
        vector<int> v(10);
        for(int i = 1;i<=n;i++){
            j= i;
            while(j>0){
                v[j%10]++;
                j/=10;
            }
        }
        cout<<v[0];
        for(int i = 1;i<v.size();i++) cout<<" "<<v[i];
            cout<<endl;
    }
    return 0;
}

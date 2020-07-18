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
    for(int T = 1 ; T<= t;T++)
    {
        MP;
        map<string,int> M;
        cin>>n;
        for(int i = 0;i<n;i++){
            cin>>s>>a;
            M[s]=a;
        }
        cin>>d;
        cin>>s;
        cout<<"Case "<<T<<": ";
        if(M[s]==0 || M[s]>(d+5)){
            cout<<"Do your own homework!"<<endl;
        }
        else if(M[s]>d) {
            cout<<"Late"<<endl;
        }
        else{
            cout<<"Yesss"<<endl;   
        }
    }
    return 0;
}

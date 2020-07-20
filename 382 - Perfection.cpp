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
    cout<<"PERFECTION OUTPUT\n";
    while(cin>>n && n)
    {
        int sum = 0;
        for(int i = 2;i*i<=n;i++){
            if(n%i==0){
                sum += n/i;
                if(n/i != i) sum+=i;
            }
        }
        if(n>1) sum++;
        cout<<setw(5)<<n<<"  ";
        if(n==sum) cout<<"PERFECT\n";
        else if(sum<n) cout<<"DEFICIENT\n";
        else cout<<"ABUNDANT\n";
    }
    cout<<"END OF OUTPUT\n";
    return 0;
}


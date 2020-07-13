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
        bitset<32> b1(n);
        vector<int> v;
        while(n)
        {
            v.push_back(n%10);
            n= n/10;
        }
        n= 0;
        for(int i = 0;i<v.size();i++){
            n = n + v[i]*pow(16,i); 
        }
        bitset<32> b2(n);
        cout<<b1.count()<<" "<<b2.count()<<endl;
    }
    return 0;
}

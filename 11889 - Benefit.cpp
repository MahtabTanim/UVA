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

map<int,int> A,C;
void process(ll a, ll c)
{
    int k = 0;
    for(i = 2; i*i<=a; i++)
    {
        while(a%i==0)
        {
            A[i]++;
            a/=i;
        }
    }
    if(a>1) A[a]++;
    for(i = 2; i*i<=c; i++)
    {
        while(c%i==0)
        {
            C[i]++;
            c/=i;
        }
    }
    if(c>1) C[c]++;
}

int main()
{
    FP;
    cin>>t;
    while(t--)
    {
        cin>>a>>c;
        if(c%a) cout<<"NO SOLUTION\n";
        else
        {
            int res = 1;
            process(a,c);
            for(auto& e:C)
            {
                if(e.second>A[e.first])
                {
                    res = res * pow(e.first,e.second);
                }
            }
            cout<<res<<endl;
        }
        A.clear(),C.clear();
    }
    return 0;
}

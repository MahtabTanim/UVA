#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define N 101
#define maxn 1000000
#define FP ff.open("output.txt")
fstream ff;

ll a,b,c,d,k,h,e,f,t,m,n,i,j,x,y,count,tcase=0,l,r;
string s1,s2,s;

int main()
{
    FP;
    vector<int> indices;
    while(cin>>a && a)
    {
        for(int i = 0; i<32; i++)
        {
            if(a&(1<<i)) indices.pb(i);
        }
        sort(indices.begin(),indices.end());
        ll sum1=0,sum2=0;
        for(int i = 0; i<indices.size(); i++)
        {
            if(i%2==0)
            {
                sum1+=(1<<indices[i]);
            }
            else sum2+=(1<<indices[i]);
        }
        cout<<sum1<<" "<<sum2<<endl;
        indices.clear();
    }
    return 0;
}

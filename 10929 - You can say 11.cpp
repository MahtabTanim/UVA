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
    MP;
    while(getline(cin,s))
    {
        if(s=="0") break;
        stringstream ss(s);
        ss>>s;
        int sum = 0,c=0 ,i = 0;
        while(s[i]=='0') i++;
        for(;i<s.size();i++){
                c++;
                if(i%2==1) sum+=(s[i]-48);
                else sum-=(s[i]-48);
        }
        cout<<s<<(((abs(sum))%11==0)?" is a ":" is not a ")<<"multiple of 11."<<endl;
    }
    return 0;
}

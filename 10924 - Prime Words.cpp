#include<bits/stdc++.h>
using namespace std;
//#define mod 1000000007
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
bool isprime(ll n)
{
    for(ll i = 2; i*i<=n; i++)
    {
        if((n%i)==0) return false;
    }
    return true;
}
int main()
{
    //FP;
    while(getline(cin,s))
    {
        ll sum = 0;
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i]>=97 && s[i]<=122)
            {
                sum+=(s[i]-96);
            }
            else if(s[i]>=65 && s[i]<=90)
            {
                sum+=(s[i]-64 + 26);
            }
        }
        if(isprime(sum)) cout<<"It is a prime word.\n";
        else  cout<<"It is not a prime word.\n";
    }
    return 0;
}

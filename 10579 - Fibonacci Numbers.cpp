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
string summ(string s1, string s2)
{
    string s="";
    int len1=s1.length(),len2=s2.length();
    if(len1<len2) swap(s1,s2);
    len1=s1.length(),len2=s2.length();
    int carry=0;
    int i,j;
    for( i=len2-1,j=len1-1; i>=0; i--,j--)
    {
        int temp=s2[i]+s1[j]-96+carry;
        carry=temp/10;
        s.pb((temp%10)+48);
    }
    while(j>=0)
    {
        int temp=s1[j]-48 +carry;
        carry=temp/10;
        s.pb((temp%10)+48);
        j--;
    }
    if(carry) s.pb(carry+48);
    reverse(s.begin(),s.end());
    return s;
}

string ss[5001];

int main()
{
    ss[1]="1";
    ss[2]="1";
    for(int i=3; i<=5000; i++)
    {
        ss[i]=summ(ss[i-1],ss[i-2]);
    }
    while(cin>>n){
        cout<<ss[n]<<endl;
    }
    return 0;
}

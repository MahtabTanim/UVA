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
string sum(string s1,string s2)
{
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    string s="";
    int len1,len2;
    if(s1.length()<s2.length()) swap(s1,s2);
    len1 = s1.length(),len2 = s2.length();
    int carry = 0;
    for( i = len2-1,j=len1-1; i>=0; i--,j--)
    {
        s.push_back((s1[j]+s2[i]-96 + carry)%10 + 48);
        carry = (s1[j]+s2[i]-96 + carry)/10;
    }
    while(j>=0)
    {
        s.pb((s1[j]-48+carry)%10 + 48);
        carry = (s1[j]-48+carry)/10;
        j--;
    }
    if(carry)s.pb(carry + 48);
    return s;
}
int main()
{
    FP;
    cin>>t;
    while(t--)
    {
        cin>>s1>>s2;
        s=sum(s1,s2);
        int i = 0;
        while(s[i]=='0')i++;
        while(i<s.size()) cout<<s[i],i++;
        cout<<endl;
    }
    return 0;
}

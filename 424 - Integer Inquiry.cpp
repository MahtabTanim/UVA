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
string res = "0";

string sum (string s1 , string s2)
{
    string res = "";
    int len1 = s1.length(), len2 = s2.length();
    if(len1>len2) swap (s1,s2);
    len1 = s1.length(), len2 = s2.length();
    int i , j, carry= 0;
    for(i = len1-1,j= len2-1;i>=0&&j>=0 ; j--,i--){
        res.pb((carry+s1[i]-48 + s2[j]-48 )%10 + 48 );
        carry = (carry+s1[i]-48 + s2[j]-48 )/10;
    }
    while(j>=0){
        res.pb((carry+s2[j]-48 )%10 + 48 );
        carry = (carry+s2[j]-48 )/10;
        j--;
    }
    if(carry) res.pb(carry+48);
    reverse(res.begin(),res.end());
    return res ;
}
int main()
{   
    FP;
    cin>>s;
    res = s;
    while(cin>>s){
        if(s=="0") break;
        res = sum(s,res);
    }
    cout<<res<<endl;
    return 0;
}

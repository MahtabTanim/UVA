// Written By Mahtab Tanim
#include<bits/stdc++.h>
using namespace std;
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl "\n"
#define End return 0
#define ll long long int
#define mp make_pair
#define pb push_back
#define ull unsigned long long int
#define pi acos(-1)
#define forn(i,a,b) for (int i=a;i<=b;i++)
int main()
{
    string s;
    int k=0;
    while(cin>>s)
    {
        if(k) cout<<nl;
    	bool leap=false,huluculu=false,buluculu=false;
    	int len =s.length();
    	int check4=(s[len-4]-48)*1000 +(s[len-3]-48)*100+(s[len-2]-48)*10 +(s[len-1]-48);
    	if(check4%4==0){
    		if(check4 % 400==0) leap=true;
    		else if(check4%100==0) leap =false;
    		else leap=true;
    	}
    	int d_sum=0,r_sum=0;
    	for(int i=0;i<len;i++)
    	{
    		d_sum+=(s[i]-48);
    		if(i%2==0) r_sum+=(s[i]-48);
    		else r_sum-=(s[i]-48);
    	}
    	if(d_sum%3==0)
    	{
    		if(s[len-1]=='5' || s[len-1]=='0') huluculu=true;
    	}
    	if(leap && (s[len-1]=='5' || s[len-1]=='0'))
    	{
    		r_sum=fabs(r_sum);
    		if(r_sum%11==0) buluculu=true;
    	}
    	if(leap) cout<<"This is leap year."<<nl;
    	if(huluculu) cout<<"This is huluculu festival year."<<nl;
    	if(buluculu) cout<<"This is bulukulu festival year."<<nl;
    	if(leap==false && buluculu==false && huluculu==false ) cout<<"This is an ordinary year."<<nl;
    	k++;
    }
End;
}

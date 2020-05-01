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
int sum(string s)
{
    int v=0;
    for(int i=0;i<s.length();i++)
    {
        if((s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122))
        {
            if((s[i]>=65 && s[i]<=90)) s[i]+=32;
            v+=s[i]-96;
        }
    }

    while(v/10)
    {
        int t=0;
        while(v>0)
        {
            t=t+v%10;
            v/=10;
        }
        v=t;
    }
    return v;
}
int main()
{
//MP;
string a,b;
while(getline(cin,a))
{
    getline(cin,b);
    double t1,t2;
    t1=sum(a),t2=sum(b);
    if(t1>t2) swap(t1,t2);
    cout<<fixed<<setprecision(2)<<fixed<<(t1/t2)*100<<" %"<<endl;
}
End;
}

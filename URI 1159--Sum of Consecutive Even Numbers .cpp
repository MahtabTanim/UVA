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
    long long n;
    while(cin>>n)
    {
        if(n==0) break;
        if(n%2) {
            n++;
        }
        long long sum=n;


        for(int i=1;i<5;i++)
        {
             sum+=(n+i*2);
        }
        cout<<sum<<endl;
    }
End;
}

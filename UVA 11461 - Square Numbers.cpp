#include <bits/stdc++.h>
#include<iterator>
#include<algorithm>
#include<map>
#include<list>
#include<math.h>
#include<fstream>
#define pb push_back
using namespace std;
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string s;

long long extra,sum=0,t,a,b,c,d,tcase=0,n,m,k,i,j;

int main()
{
    while(cin>>n>>m && n&&m)
    {
        sum=0;
        for(int i=n;i<=m;i++)
        {
            double x=sqrt((double) i);
            int x1=x;
            if(x1==x) sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}

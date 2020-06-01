#include <iostream>
#include<iterator>
#include<algorithm>
#include<map>
#include<fstream>
using namespace std;
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
fstream ff;

long long  t,n,m,a,x,q,b,l,r,i,j,k,tcase=0;

string s;

int main()
{
    cin>>n;
    while(n--)
    {
        cin>>t;
        long long sum=0;
        while(t--)
        {
            cin>>a>>l>>b;
            if(l)sum+=a*b;
        }
        cout<<sum<<endl;
    }
}

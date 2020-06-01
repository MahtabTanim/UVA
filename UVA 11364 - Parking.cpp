#include <iostream>
#include<iterator>
#include<algorithm>
#include<map>
#include<math.h>
#include<fstream>
using namespace std;
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

long long  p=0,np=0,t,n,m,a,x,q,b,l,r,i,j,k,tcase=0;
string s;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++) cin>>A[i];
        sort(A,A+n);
        m=0;
        for(int i=0;i<n;i++) m+=fabs(A[i]-A[(i+1)%n]);
        cout<<m<<endl;
    }
return 0;
}

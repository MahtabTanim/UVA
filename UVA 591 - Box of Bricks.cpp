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
    while(cin>>n && n)
    {
        sum=0;
        vector<int> V;
        for(int i=0;i<n;i++)
        {
            cin>>j;V.pb(j);
            sum+=j;
        }
        sort(V.begin(),V.end());
        sum/=n;
        j=0;
        int count=0;
        while(V[j]<sum)
        {
            count+=sum-V[j];
            j++;
        }
        cout<<"Set #"<<++tcase<<"\nThe minimum number of moves is "<<count<<".\n"<<endl;
    }
    return 0;
}

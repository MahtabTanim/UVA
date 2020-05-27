#include <bits/stdc++.h>
using namespace std;

int a,b;
int main()
{
    while(cin>>a>>b)
    {
        int count =0;
        count=a;
        count+=a/b;
        a=a/b+a%b;
        while(a>=b)
        {
            count+=a/b;
            a=a%b + a/b;
        }
        cout<<count<<endl;
    }

    return 0;
}

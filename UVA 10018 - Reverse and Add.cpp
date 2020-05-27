#include <bits/stdc++.h>
using namespace std;

long long reverse(long long n)
{
    long long x=0;
    while(n>0)
    {
        x=x*10 + n%10;
        n=n/10;
    }
    return x;
}

//195 4  9339

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int c=0;
        long long n,sum=0;
        cin>>n;
        sum=13;
        while(sum != reverse(sum))
        {
            c++;
            sum=n;
            sum+=reverse(n);
            n=sum;
        }
        cout<<c<<" "<<sum<<endl;
    }
    return 0;

}

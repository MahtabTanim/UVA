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
    while(getline(cin,s))
    {
        if(s=="DONE") return 0;
        string s1="";
        int len=s.length();
        for(int i=0;i<len;i++)
        {
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
            {
                if(s[i]>=97) s[i]-=32;
                s1.push_back(s[i]);
            }
        }

        len=s1.length();
        bool status =true;

        for(int i=0;i<len/2;i++)
        {
            if(s1[i]!=s1[len-i-1])
            {
                cout<<"Uh oh..\n";
                status=false;
                break;
            }
        }
        if(status)cout<<"You won't be eaten!\n";
    }
    
return 0;
}

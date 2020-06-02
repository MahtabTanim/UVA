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
//fstream ff;
char pp(char c)
{
    if(c>='A' && c<='C') return '2';
    if(c>='D' && c<='F') return '3';
    if(c>='G' && c<='I') return '4';
    if(c>='J' && c<='L') return '5';
    if(c>='M' && c<='O') return '6';
    if(c=='P' ||c=='R' || c<='S') return '7';
    if(c>='T' && c<='V') return '8';
    if(c>='W' && c<='Y') return '9';
}
string s;

long long extra,sum=0,t,a,b,c,d,tcase=0,n,m,k,i,j;

int main()
{
    //ff.open("output.txt");
    cin>>t;
    for(int fs=0;fs<t;fs++)
    {
        getline(cin,s);
        cin>>n;
        map<string,int> ma;
        map<string,int> ::iterator it;
        while(n--)
        {
            MP;
            string s1="";
            cin>>s;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]>=48 && s[i]<=57) s1.pb(s[i]);
                else if(s[i]>=65 && s[i]<=90 && s[i]!='Q' && s[i]!='Z')
                {
                    s1.push_back(pp(s[i]));
                }
            }
            ma[s1]++;
        }
        vector<pair<string,int> > vpp;
        for(it=ma.begin();it!=ma.end();it++)
        {
            if((it->second)>1)
            {
                vpp.pb(make_pair(it->first,it->second));
            }
        }
        bool status=true;
        for(int i=0;i<vpp.size();i++)
        {
            int count=0;
            s=vpp[i].first;
            for(int j=0;j<s.length();j++)
            {
                status=false;
                if(count==3) cout<<"-";
                cout<<s[j];
                count++;
            }
            cout<<" "<<vpp[i].second<<endl;
        }
        if(status) cout<<"No duplicates.\n";
        if(fs!=(t-1))cout<<"\n";
    }
    return 0;
}

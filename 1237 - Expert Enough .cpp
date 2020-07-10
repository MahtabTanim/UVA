#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define N 101
#define maxn 1000000
#define FP ff.open("output.txt")
fstream ff;

ll a,q,b,c,d,k,h,e,f,t,m,n,i,j,x,y,count,tcase=0,l,r;
string s1,s2,s;

int main()
{
    FP;
    cin>>t;
    while(t--)
    {
        if(tcase) cout<<endl;
        ++tcase;
        cin>>n;
        vector<pair<string, pair<ll,ll> > > v;
        while(n--)
        {
            cin>>s>>a>>b;
            v.pb(mp(s,mp(a,b)));
        }
        cin>>q;
        while(q--)
        {
            cin>>a;
            bool r = false;
            string res ;
            for(int i = 0; i<v.size(); i++)
            {
                if(a>=(v[i].second.first) && a<=(v[i].second.second))
                {
                    if(r == true)
                    {
                        r = false;
                        break;
                    }
                    res = v[i].first;
                    r = true;
                }
            }
            if(r) cout<<res<<endl;
            else cout<<"UNDETERMINED"<<endl;
        }
    }
    return 0;
}

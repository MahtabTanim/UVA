#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define N 1378
#define maxn 1000000
#define FP ff.open("output.txt")
#define FR ff.open("output.txt")
fstream ff;

ll a,q,b,c,d,k,h,e,f,t,m,n,i,j,x,y,count,tcase=0,l,r;
string s1,s2,s;

#define NN 46351

vector<int> primes;
bool status [NN];

void sieve()
{
    int n= NN;
    for(int i = 2;i*i<=n;i++){
        if(status [i]==0){
            for(int j = i*i;j<=n;j+=i) status[j]=1;
        }
    }
    for (int i = 2;i<=n;i++){
        if(status[i]==0) primes.pb(i);
    }
}

vector<ll> res_primes;

bool status2[1000001];

void process(ll l, ll r)
{
    if(l==1) l++;
    memset(status2, false , r-l+1);
    for(int i = 0;i<primes.size() && primes[i]<=r;i++){

        ll k = (l/primes[i])*primes[i];
        if(k<l) k+=primes[i];

        if(k==primes[i]) res_primes.pb(k);
        for(ll j = k ; j<=r ; j+=primes[i]){
            status2[j-l]=true;
        }
    }
    for(ll i = l;i<=r;i++){
        if(status2[i-l]==false) res_primes.pb(i);
    }
}


int main()
{   
    FP;
    sieve();
    while(cin>>l>>r)
    {
        process(l,r);
        sort(res_primes.begin(),res_primes.end());
        if(res_primes.size()<=1) cout<<"There are no adjacent primes."<<endl;
        else{
            ll a, b , c,d, min_dis = 1000000000000 , max_dis = -1;
            for(ll i = 0;i<res_primes.size()-1;i++){
                ll dd =fabs(res_primes[i]-res_primes[i+1]); 
                if(dd<min_dis){
                    a=res_primes[i];
                    b= res_primes[i+1];
                    min_dis = dd;
                }
                if(dd>max_dis){
                    c=res_primes[i];
                    d= res_primes[i+1];
                    max_dis = dd;
                }
            }
            cout<<a<<","<<b<<" are closest, "<<c<<","<<d<<" are most distant."<<endl;
        }
        res_primes.clear();
    }
    return 0;
}

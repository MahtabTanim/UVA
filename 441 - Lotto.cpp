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
fstream ff;

ll a,q,b,c,d,k,h,e,f,t,m,n,i,j,x,y,count,tcase=0,l,r;
string s1,s2,s;

int main()
{
    FP;
    while(cin>>n && n)
    {
        if(tcase) cout<<endl;
        vector<int> v(n);
        for(int i = 0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        for(int i = 0;i<n-5;i++){
            for(int j = i+1;j<n-4;j++){
                for(int k = j+1 ;k<n-3;k++){
                    for(int l = k+1;l<n-2;l++){
                        for(int m = l+1;m<n-1;m++){
                            for(int o = m+1;o<n; o++){
                                cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<" "
                                <<v[l]<<" "<<v[m]<<" "<<v[o]<<endl;
                            }
                        }
                    }
                }
            }
        }
        ++tcase;
    }
    return 0;
}

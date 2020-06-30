#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define maxn 1000000
#define FP ff.open("output.txt")
fstream ff;
ll a,b,c,d,k,h,e,f,t,m,n,i,j,x,y,count,tcase=0;
string s1,s2;
int MU[maxn+1],M[maxn+1];
bool status [maxn+1];
void sieve()
{
    int n=maxn;
    for(int i =2;i*i<=maxn;i++)
    {
        if(status[i]==0){
            for(int j = i*i;j<=maxn;j+=i) status[j]=true;
        }
    }
}
int F(int n)
{
    int count = 0;
    for(int i =2;i*i<=n;i++){
        int count2 =0;
        while(n%i==0){
            count2++;
            n=n/i;
            count++;
        }
        if(count2>1) return 0;
    }
    if(n>1) count ++;
    return count;
}
void process()
{
    sieve();
    MU[1]=1;
    M[1]=1;
    for(int i =2;i<=maxn;i++){
        if(status[i]==0){
            MU[i]=-1;
            M[i]=M[i-1]+(-1);
        }else{
            int factors = F(i);
            if(factors==0) MU[i]=0;
            else if(factors%2==0) MU[i]=1;
            else MU[i]=-1;
            M[i]=M[i-1]+MU[i];
        }
    }
}
int main()
{
    //FP;
    process();
    while(cin>>n&&n)
    {
        cout<<setw(8)<<n<<setw(8)<<MU[n]<<setw(8)<<M[n]<<endl;
    }
    return 0;
}

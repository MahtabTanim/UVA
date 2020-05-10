#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j; cin>>n;
    std::vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>j; v.push_back(j);
    }
    int t,q; cin>>t;
    while(t--)
    {
        cin>>q;
        std::vector<int> :: iterator upper,lower;
        
        upper=upper_bound(v.begin(),v.end(),q);
        lower=lower_bound(v.begin(),v.end(),q);

        int up=upper-v.begin();
        int low=lower-v.begin();
        if(low==0) cout<<"X ";
        else cout<<v[low-1]<<" ";
        if(up==n) cout<<"X\n";
        else cout<<v[up]<<endl;
    }
    return 0; 
}

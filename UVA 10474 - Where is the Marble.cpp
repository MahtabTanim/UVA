#include<bits/stdc++.h>
using namespace std;
int search( int A[ ],int n, int k)
{
	int hi=n-1,lo=0,mid, index=-1;
	while(lo<=hi)
	{
		mid=lo+(hi-lo)/2;
		if(A[mid]==k)
		{
			index=mid;
			hi=mid-1;
		}
		else if(A[mid]<k)
		{
			lo=mid+1;
		}
		else
		{
			hi=mid-1;
		}
	}
return index;
}
int main()
{ 
	int n,q,tcase=0,k;
	while(cin>>n>>q, (n||q))
	{
		int A[n];
		for(int i=0;i<n;i++) cin>>A[i];
		sort(A,A+n);
		cout<<"CASE# "<<++tcase<<":\n";
		while(q--)
		{
			cin>>k;
			int ans=search(A,n,k);
			if(ans==-1) cout<<k<<" not found\n";
			else cout<<k<<" found at "<<ans + 1<<"\n";
		}

	}
	return 0;
}

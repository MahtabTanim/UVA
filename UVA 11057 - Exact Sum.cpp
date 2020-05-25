#include<bits/stdc++.h>
using namespace std;
void search(int A[], int n,int money, int *a, int *b)
{
	int lo=0, hi=n-1,dif=100000000;
	while(lo<hi)
	{
		int sum=A[lo]+A[hi];
		if(sum==money)
		{
			if(fabs(A[lo]-A[hi])<dif) 
			{
				*a=A[lo];
				*b=A[hi];
				dif=fabs(A[lo]-A[hi]);
			}
			lo++;
		}
		else if(sum<money) lo++;
		else hi--;

	}
}
int main()
{ 
	int n;
	while(cin>>n)
	{
		int m,a,b;
		int A[n];
		bool res=true;
		for(int i=0;i<n;i++)
		{
			cin>>A[i];
		}
		cin>>m;
		sort(A,A+n);
		search(A,n,m,&a,&b);
		if(a>b) swap(a,b);
		cout<<"Peter should buy books whose prices are "<<a<<" and "<<b<<".\n\n";
	}
return 0;
}

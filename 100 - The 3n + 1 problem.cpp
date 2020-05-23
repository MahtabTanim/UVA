#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j;
	while(cin>>i>>j)
	{
		int ans=0;
		cout<<i<<" "<<j<<" ";
		if(i>j) swap(i,j);
		for(int k=i;k<=j;k++)
		{
			int temp=k;
			int count =1;
			while(temp!=1)
			{	count++;
				if(temp%2) temp =temp*3 + 1;
				else temp=temp/=2;
			}
			if(count> ans) ans=count;
		}
		cout<<ans<<endl;
	}
	return 0;
}

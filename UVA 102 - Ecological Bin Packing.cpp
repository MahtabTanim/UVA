#include<bits/stdc++.h>
using namespace std;
int main()
{ 
	int b[3],g[3],c[3];
	while(cin>>b[0]>>g[0]>>c[0]>>b[1]>>g[1]>>c[1]>>b[2]>>g[2]>>c[2])
	{
		bool bb=false,cc=false,gg=false;
		string s,s1;
		int brown=b[0]+b[1]+b[2];
		int green=g[0]+g[1]+g[2];
		int clear=c[0]+c[1]+c[2];
		int mi=brown+green+ clear+1;
		s1="BCG";
		int steps=(b[1]+b[2])+c[0]+c[2]+g[0]+g[1];
		if(steps<mi)
		{
			mi=steps;
			s=s1;
		}
		steps=(b[1]+b[2])+g[0]+g[2]+c[0]+c[1];
		s1="BGC";
		if(steps<mi)
		{
			mi=steps;
			s=s1;
		}
		steps=(c[1]+c[2])+b[0]+b[2]+g[0]+g[1];
		s1="CBG";
		if(steps<mi)
		{
			mi=steps;
			s=s1;
		}
		steps=(c[1]+c[2])+g[0]+g[2]+b[0]+b[1];
		s1="CGB";
		if(steps<mi)
		{
			mi=steps;
			s=s1;
		}
		steps=(g[1]+g[2])+b[0]+b[2]+c[0]+c[1];
		s1="GBC";
		if(steps<mi)
		{
			mi=steps;
			s=s1;
		}
		steps=(g[1]+g[2])+c[0]+c[2]+b[0]+b[1];
		s1="GCB";
		if(steps<mi)
		{
			mi=steps;
			s=s1;
		}
		cout<<s<<" "<<mi<<endl;
	}
	return 0;
}

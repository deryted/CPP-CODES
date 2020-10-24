#include<cstdio>
#include<iostream>
using namespace std;
int w[10001];
int main()
{
	int n,m,l=101,low=101,ans=0;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)cin>>w[i];
	while(l!=m)
	{
		l=m;
		low=101;
		for(int i=0;i<n&&l!=0;i++)
		{
			if(w[i]<low&&w[i]!=0)low=w[i];
			if(w[i]!=0)l-=1;
		}
		l=m;
		for(int i=0;i<n&&l!=0;i++)
		{
			if(w[i]!=0)
			{
				w[i]-=low;
				l-=1;
			}
			if(w[i]<0)w[i]=0;
		}
		if(low!=101)ans+=low;
	}
	printf("%d",ans);
	return 0;
}

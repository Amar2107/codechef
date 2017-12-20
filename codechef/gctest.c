#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int gcd(int a,int b)
{
	int m=0,i,g=0,lcm=1;
	m=b;
	if(a>b)m=a;
	for(i=1;i<=m;i++){
		if((a%i==0)&&(b%i==0))
			g=i;
	}
	return g;
}
int main()
{
	int a,b,t;
	scanf("%d",&t);
	int g[t];
	int l[t];
	if(t>=1&&t<=1000){
	for(int i=1;i<=t;i++)
	{
	scanf("%d %d",&a,&b);
	if(a>=1&&a<=1000000&&b>=1&&b<=1000000){
	g[i]=gcd(a,b);
	l[i]=a*b/g[i];
	}
	else
		exit(0);
	}
	for (int i=1; i<=t; ++i)
	printf("%d %d \n",g[i],l[i]);
	}
	return 0;
}

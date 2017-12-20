#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            return gcd(a - b, b);
        else
            return gcd(a, b - a);
    }
    return a;
}
int main()
{
	int a,b,t;
	scanf("%d",&t);
	int g,l;
	if(t>=1&&t<=1000){
	for(int i=1;i<=t;i++)
	{
	scanf("%d %d",&a,&b);
	if(a>=1&&a<=1000000&&b>=1&&b<=1000000){
	g=gcd(a,b);
	l=a*b/g;
		printf("%d %d \n",g,l);
	}
	else
		exit(0);
	}
	}
	return 0;
}
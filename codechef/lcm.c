#include<stdio.h>
#include<stdlib.h>
int func(int a,int b)
{
	if(a==0 || b==0)
	return 0;
	if(a==b)
		return a;
	if(a>b)
		return(a-b,b);
	return(a,b-a);
}
int main(int argc, char const *argv[])
{
	int a,b,p=1,g=0;
	if(argc>3)
		printf("Enter both the arguments\n");
	else
	{
		a=atoi(argv[1]);
		b=atoi(argv[2]);
		p=a*b;
	}
	g=func(a,b);
	printf("%d",(g/p));
	return 0;
}

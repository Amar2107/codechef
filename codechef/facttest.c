#include<math.h>
#include<stdio.h>
int fact(int n)
{
	int i,f=1,j,m=1,t=0;
	int ar[400]={1};
	for (i = 2; i < n; i++)
	{
		for (j = 0; j <m ; j++)
		{
			f=i*ar[j]+t;
			ar[j]=f%10;
			t=f/10;
		}
		while(t)
		{
			ar[m]=t%10;
			t=t/10;
			m++;
		}
	}	
	for (i=m-1;i>=0;i--)
		printf("%d",ar[i]);
}
int main()
{
	int t,i,n;
	scanf("%d",&t);
	for (i = 0; i < t; i++){
				scanf("%d",&n);
			fact(n);
		}
}
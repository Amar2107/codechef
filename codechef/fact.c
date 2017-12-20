#include<stdio.h>
#include<math.h>
int arrange(int n,int arr[],int c)
{
	int i,f=1;
	int carry=0;
	for(i=0;i<c;i++)
	{
		f=arr[i]*n+carry;
		arr[i]=f%10;
		carry=f/10;
	}
	while(carry)
	{
		arr[c]=carry%10;
		carry=carry/10;
		c++;
	}
	return c;
}
int fact(int n)
{
	int arr[500]={1};
	int c=1,i;
	for(i=2;i<=n;i++)
		c=arrange(i,arr,c);
		for (i =c-1;i>=0;i--)
	printf("%d",arr[i]);
	printf("\n");
}
int main()
{
	int n,t;
	scanf("%d",&t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d",&n);
		fact(n);
	}
	return 0;
}
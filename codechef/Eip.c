#include<stdio.h>
#include<stdlib.h>
	int count=0;
int divi(int a,int k)
{
	if(a%k==0)
		count++; 
		return count;
}
int main()
{
	int i,c=0,a=0,n=0,k=0;
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		c=divi(a,k);
	}
	printf("%d",c);
	return 0;
}

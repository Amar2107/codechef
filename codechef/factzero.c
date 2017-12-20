#include <stdio.h>
#include <math.h>
int zeros(int  n)
{
    int c= 0;
 
    for (int i=5; n/i>=1; i *= 5)
          c+= n/i;
    return c;
}
 int main()
{
	int n,t;
	scanf("%d",&t);
	for (int i = 0; i < t; i++)
	{
    scanf("%d \n",&n);
    int a = zeros(n);
    printf("%d \n",a);
	}
    return 0;
}
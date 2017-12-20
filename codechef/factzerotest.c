#include <stdio.h>
#include <math.h>
int zeros(int  n)
{
    int c= 0;
    for (int i=5; n/i>=1; i *= 5){
      printf("%d\n",c );
          c+= n/i;
      printf("%d\n",c );
  }
    return c;
}
 int main()
{
	int n,t;
	scanf("%d",&n);
    int a = zeros(n);
    printf("%d \n",a);
    return 0;
}
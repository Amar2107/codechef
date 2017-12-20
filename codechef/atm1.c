#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a;
	float b=0.0,sum=0.0,w=0.0;
	 scanf("%d %f",&a,&b);
	if(a>0&&a<=2000&&b>=0&&b<2000){
		if(a%5!=0 || a+0.5>=w)
		printf("%.2f", ((signed long)(w*100)*0.01f));
		else
		{
			sum=(w-0.50)-a;
			printf("%.2f", ((signed long)(sum*100)*0.01f));
		}	
	}
	return 0;
}

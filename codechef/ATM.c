#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char* argv[])
{
	float sum=0.0,w=0.0;
	 int a=atoi(argv[1]);
	 int b=atoi(argv[2]);
	if((a<=2000 && a>0) && (b>=0 && b<=2000)){
		w=(float)b; 
		if(a%5!=0)
		printf("%.2f", ((signed long)(w*100)*0.01f));
		else if(a>w)
		printf("%.2f", ((signed long)(w*100)*0.01f));
		else
		{
			sum=(w-0.50)-a;
			printf("%.2f", ((signed long)(sum*100)*0.01f));
		}	
	}
	return 0;
}

#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	char wrd[100];
	int v=0;
	for (int i = argc; i >=0 ; i--)
		wrd[v++]=argv[i];
	if(strcmp(wrd,argv)==0)
		printf("palindrome\n");
	else
		printf("not palindrome\n");
	return 0;
}
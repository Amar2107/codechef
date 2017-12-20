#include<stdio.h>
#include<math.h>
void mergesort(int f,int m,int l,int ar[])
{
	int i,j,k,n1,n2;
	n1=m-f+1;
	n2=l-m;
	int a[n1],b[n2];
	for (i = 0; i < n1; i++)
		a[i]=ar[f+i];
	for (j = 0; j < n2; j++)
		b[j]=ar[m+1+j];
	i=0;
	j=0;
	k=f;
	while(i<n1 && j<n2)
	{
		if (a[i]>=b[j])
			ar[k]=b[j++];
		else
			ar[k]=a[i++];
		k++;
		
	}
	while(i<n1)
		ar[k++]=a[i++];
	while(j<n2)
		ar[k++]=b[j++];
}
void merge(int f,int l,int ar[])
{
	if(f<l)
	{
		int m=f+(l-f)/2;
		merge(f,m,ar);
		merge(m+1,l,ar);
		mergesort(f,m,l,ar);
	}
}

void printlist(int n,int ar[])
{
	for (int i = 0; i < n; i++)
	printf("%d\n",ar[i]);
}
int main()
{
	int n,ar[100];
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	scanf("%d",&ar[i]);
	merge(0,n-1,ar);
	printlist(n,ar);
	return 0;
}
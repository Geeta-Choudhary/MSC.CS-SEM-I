#include<stdio.h>


int main()
{
	int i,n,a[n],min;
	printf("enter the number of elements in list");
	scanf("%d",&n);
	for( i=0;i<n;i++)
	{
		printf(" element %d=",i);
		scanf("%d",&a[i]);
	}
	
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
			min=a[i];
	}
	printf("\n min=%d",min);
return 0;	
}

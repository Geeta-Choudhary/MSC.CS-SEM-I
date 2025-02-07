#include<stdio.h>

int main()
{
	int i,n,a[n],max;
	printf("enter the number of elements in list");
	scanf("%d",&n);
	for( i=0;i<n;i++)
	{
		printf(" element %d=",i);
		scanf("%d",&a[i]);
	}
	
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	printf("\n max=%d",max);
return 0;	
}

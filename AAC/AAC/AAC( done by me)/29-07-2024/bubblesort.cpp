#include<stdio.h>

void swap(int *a,int *b){
	int temp = *a;
	*a=*b;
	*b=temp;
}

void bubbleSort(int array[],int n ){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(array[j] > array[j+1])
				{
				/*	temp=array[j];
					array[j]=array[j+1];
					array[j+1]=temp;	
					*/
				 swap(&array[j],&array[j+1]);		
				}
			}
		//	swap(&array[min_index],&array[i]);
	}
}

void printArray(int array[],int n){
	int i;
	for( i=0;i<n;i++){
		printf("%d\n",array[i]);
		printf("\n");
	}

printf("\n");
}

int main()
{
	int i,n,array[n];
	printf("enter the number of elements in list\n");
	scanf("%d",&n);
	for( i=0;i<n;i++)
	{
		printf(" element %d=",i);
		scanf("%d",&array[i]);
	}
	
	bubbleSort(array, n);
	printf("\n Sorted array in Acsending Order:");
	printArray( array, n);
	printf("\n");
}

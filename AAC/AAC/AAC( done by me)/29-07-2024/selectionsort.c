#include<stdio.h>



void swap(int *a,int *b){
	int temp = *a;
	*a=*b;
	*b=temp;
}

void selectionSort(int array[],int n ){
	int i,j;
	for(i=0;i<n-1;i++){
		int min_index =i;
		for(j=i+1;j<n;j++){
			if(array[j] < array[min_index])
				min_index = j;
			}
			swap(&array[min_index],&array[i]);
	}
}

void printArray(int array[],int n){
	int i;
	for( i=0;i<n;i++){
		printf("%d",array[i]);
		printf("\n");
	}

printf("\n");
}

int main()
{
	int i,n,array[n];
	printf("enter the number of elements in list");
	scanf("%d",&n);
	for( i=0;i<n;i++)
	{
		printf(" element %d=",i);
		scanf("%d",&array[i]);
	}
	
	selectionSort(array, n);
	printf("\n Sorted array in Acsending Order:");
	printArray( array, n);
}

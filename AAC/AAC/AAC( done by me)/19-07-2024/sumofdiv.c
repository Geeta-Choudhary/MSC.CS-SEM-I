#include<stdio.h>
int main()
{

    int i,n,sum=0;
    printf(" enter the positive integer n : ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
	{
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum == n)
{

    printf(" sum of all divisor of integer n=%d is %d ,Therefore it is a PERFECT NUMBER  ",n,sum );
}
else
{
	printf("sum of all divisor of n=%d is  %d ,THEREFORE it is NOT A PERFECT  NUMBER",n,sum);
}
}

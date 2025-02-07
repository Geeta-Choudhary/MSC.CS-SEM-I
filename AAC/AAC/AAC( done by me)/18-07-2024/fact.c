#include<stdio.h>
void fact(int n)
{
    int i,fact=1;
    for(i=1;i<n+1;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d = %d ",n,fact);

}

int main()
{
    int n;
    printf("enter the number to calculate factorial");
    scanf("%d",&n);
    fact(n);
}

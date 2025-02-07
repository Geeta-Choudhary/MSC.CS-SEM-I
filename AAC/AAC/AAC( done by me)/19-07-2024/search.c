#include<stdio.h>
int main()
{
    int i,flag=0,n,s;
    printf(" Enter the number of element of list ");
    scanf("%d",&n);
    int a[n]; 
    for(i=0;i<n;i++)
    {
        printf("enter %dth : ",i);
        scanf("%d",&a[i]);
    }
    printf("enter the number to search : ");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            //printf(" The number %d is present at %d",s,a[i]);
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("%d is in this list at ",s);

    }
    else
    {
        printf("number not found");
    }
}

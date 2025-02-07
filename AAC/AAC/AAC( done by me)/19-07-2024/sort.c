#include<stdio.h>
int main()
{

    int a[3],tmp,i,n;
    for(i=0;i<3;i++)
    {
        printf(" Enter the %d number:  ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]<a[i+1])
        {
            tmp=a[i];
            a[i]=a[i+1];
            a[i+1]=tmp;
        }
    }
    printf("numbers after sorting " );
     for(i=0;i<3;i++)
    {
        printf(" %d ",a[i]);
        
    }
}

    

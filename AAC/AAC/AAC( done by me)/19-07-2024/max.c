#include<stdio.h>
int main()
{

    int a,b,c;
    printf(" Enter the first number:  ");
    scanf("%d",&a);
    printf(" Enter the second  number:  ");
    scanf("%d",&b);
    printf(" Enter the third number:  ");
    scanf("%d",&c);

    if ((a>b) && (a>c))
    {
        /*if(c>b)*/
        
            printf("%d is max ",a);
        
    }
    else if((b>a) && (b>c))    {
       /* if(b>c)*/

            printf("%d is max ",b);
        
    }
    else{
            printf("%d is max",c);
    }

return 0;
}

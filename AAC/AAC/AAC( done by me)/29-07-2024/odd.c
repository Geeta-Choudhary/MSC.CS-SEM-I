#include<stdio.h>
int main()
{

    int i;
    printf(" odd numbers between 11 to 30  ");
    for(i=30;i>=11;i--)
    {
        if(i%2==1)
        printf(" \n  %d ",i);
    }
}
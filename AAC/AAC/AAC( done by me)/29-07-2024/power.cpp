#include<stdio.h>
int main()
{
	int base,exp;
	long double result=1.0;
	printf("Enter the base\n");
	scanf("%d"&base);
	printf("Enter the exponent\n");
	scanf("%d",&exp);
	
	while(exp !=0)
{
 result *=base;
 --exp;
}
printf("Answer = %.0Lf",result);
return 0;
}

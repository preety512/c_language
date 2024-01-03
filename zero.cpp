//wap to check whether given number is positive ,negative or zero
#include<stdio.h>
main()
{
	int a;
	printf("enter the number ");
	scanf("%d",&a);
	a>0?printf("number is positve"):(a<0?printf("number is negative"):printf("number is zero"));
}

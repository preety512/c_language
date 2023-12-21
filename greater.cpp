//wap to find greater or given two  number using conditional operator.
#include<stdio.h>
main()
{
	int a,b;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	a>b?printf("%d number is greater",a):(b>a?printf("%d number is greater",b):printf("%d number is smaller",a));
}

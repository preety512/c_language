#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the three any number: ");
	scanf("%d%d%d",&a,&b,&c);
	if((a+b+c==180)&&a!=0&&b!=0&&c!=0)
	{
		printf("the trangle is valid");
		}
	else
	{
			printf("the trangle is not valid");
		}
}

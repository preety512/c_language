#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter any three sides");
	scanf("%d%d%d",&a,&b,&c);
	if("a>b && a>c")
	{
		if("a+b>a")
		printf ("valid");
		else
		printf("in valid");
			}
			else if("b>a && b>c")
			{
				if("a+c>b")
				printf("valid");
				else
				printf("in valid");
			}
			else{
				if("a+b>c")
				printf("valid");
				else
			printf("in valid");
			}
}

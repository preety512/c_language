#include<stdio.h>
main()
{
int a,b,c;
printf("enter any three sides");
scanf("%d%d%d",&a,&b,&c);
if(a==b&&b==c)
{
	printf("angle is equilateral");
	
}
else{
	if("a==b||b==c")
	{
		printf("angle is isoceles");
	}
	else{
		printf("angle is scalin");
	}
	
}
}

#include<stdio.h>
main()
{
	float area,len,width,p;
	printf("enter any two number for length and widht ");
	scanf("%f%f",&len,&width);
	area=len*width;
	p=2*(len+width);
	printf("area of rectangle is:%f",area);
	printf("parameter of rectangle is :%f",p);
}

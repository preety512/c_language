#include<stdio.h>
#include "math.h"
main()
{
	float a,b,c,s,area,p;
	printf("enter sides of triangle");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	p=2*s;
	printf("area=%f\nperimeter=%f",area,p);
	//printf("perimeter=%f",p);
}

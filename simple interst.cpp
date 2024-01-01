#include<stdio.h>
#include "math.h"
main()
{
	float si,p,r,t,ci;
	printf("enter any threeb number for principal, rate and time :");
	scanf("%f%f%f",&p,&r,&t);
	si=p*r*t;
	ci=p*(pow((1+r/100),t));
	printf("simple interest = %f",si);
	printf("compound interst = %f",ci);
	
}

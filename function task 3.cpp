//wap to find area and perimeter of rectangle using udf.udf should
// return the values of area and perimeter to the main fuction 
#include<stdio.h>
void rect(int,int,int*,int*);
main()
{
	int l,b,area,peri;
	printf("enter of rectangle");
	scanf("%d%d",&l,&b);
	rect(l,b,&area,&peri);
	printf("area=%d,perimeter=%d",area,peri);
}
void rect(int a,int b,int *c,int *d)
{
	*c=a*b;
	*d=2*(a+b);
	
}

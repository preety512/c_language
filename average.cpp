#include<stdio.h>
main()
{
	int a,b,c,d,e,sum;
	float avg;
	printf("enter any five number");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	sum=a+b+c+d+e;
	avg=sum/5.0;                                                                                                                     
	printf("average of five number is :%f",avg);
	
}

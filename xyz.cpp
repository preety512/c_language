
 //two number are given by user.wap to find diffrence
 // of these number if firstnumber second number otherwise
 // find sum of number 
#include<stdio.h>

main()
{
	int a,b;
	printf("enter the two any  number: ");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("difference is%d ",a-b);
		
	}
	else{
		printf("sum is=%d",a+b);
	}

}

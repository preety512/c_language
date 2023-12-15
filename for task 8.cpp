//wap to print first n odd  terms of fibonacci series . value of n is given by user;
//wap to find gcd of given two number.
//greatest common divisor 
// highest common factor 
#include<stdio.h>
main()
{
	int  a,b,i,s;
	printf(" enter two number");
	scanf("%d%d",&a,&b);
		//s=a<b?a:b;
*/	if(a<b)
	s=a;
	else
	s=b;
	for(i=s;i>=1;i--)
	{
		if(a%i==0&&b%i==0){
			printf("hcf=%d",i);
			break;
		}
	}/*
} 

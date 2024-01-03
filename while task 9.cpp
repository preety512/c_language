#include<stdio.h>
main()
{
	int n,d,sum=0,count=0;   
	printf("enter number");
	scanf("%d",&n);         
	while(n!=0)
	{
	count++;
//	d=n%10;
//	sum=sum+d;
	n=n/10;
	}
	printf("number of all digits=%d",count);
}

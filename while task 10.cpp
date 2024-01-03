#include<stdio.h>
main()
{
	int n,d,sum=0,count=0;   
	printf("enter number");
	scanf("%d",&n);         
	while(n!=0)
	{	
	d=n%10;
	sum=sum*10+d;
	n=n/10;
	}
	printf("reverse%d",sum);
}

#include<stdio.h>
main()
{
	int n,d,sum=0,n1;   
	printf("enter number");
	scanf("%d",&n); 
	n1=n; //while        
	while(n!=0)
	{	
	d=n%10;
	sum=sum+d*d*d;//sum=sum+pow(d,count);
	n=n/10;
	}
	if(sum==n1){
		printf("it is armstrong ");
	}
	else{
		printf("not armstrong");
	}
}

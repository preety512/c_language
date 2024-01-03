//wap to find given number is a palindrome number or not
#include<stdio.h>
main()
{
	int n,d,r=0,n1;   
	printf("enter number");
	scanf("%d",&n); 
	n1=n;        
	while(n!=0)
	{	
	d=n%10;
	r=r*10+d;
	n=n/10;
	}
	if(r==n1){
		printf("it is palindrom");
	}
	else{
		printf("not palindrom");
	}
}

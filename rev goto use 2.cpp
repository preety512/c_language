//goto rev use
#include<stdio.h>
main()
{
	int r,n,d;
	printf("enter number");
	scanf("%d",&n);
rev:
	d=n%10;
	r=r*10+d;
	n=n/10;
if(n!=0)
	goto rev;
	printf(" reverse %d",r);
	
}

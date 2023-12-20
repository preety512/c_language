//program to find some of digits using recursion
#include<stdio.h>
int sod(int);//protoype
int sod (int n)
{
	static int s=0;
//	int s=0,d;
     int d;
	if(n>0)
	{
		d=n%10;
		s=s+d;
		n=n/10;
		sod(n);
	}
	else
	  return s;
}
main()
{
	int n;
	printf("enter number");
	scanf("%d",&n);
	printf("sum of digits=%d",sod(n));
}

#include<stdio.h>
main()
{
	int n,i,a;
	printf("enter number");
	scanf("%d",&n);
	a=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
				a++;
				break;
		}
		
	}
	if(a==0)
	printf("prime");
	else
	printf("not prime");
}

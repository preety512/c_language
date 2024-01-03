#include<stdio.h>
main()
{
	int i,n,f=1;
	printf("enter number");
	scanf("%d",&n);
	i=1;//i=n;
	while(i<=n)//(i>0)
	{
		f=f*i;
		i++;//i--;
	}
	printf("factorial of %d=%d",n,f);
}

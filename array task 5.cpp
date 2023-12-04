//wap to find largest  of given number
#include<stdio.h>
main()
{
	int n,i,a[500],c;
	printf("enter size of array");
	scanf("%d",&n);
		printf("enter all number");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n/2;i++)
	{
	
	c=a[i];
   a[i]=a[n-1-i];
   a[n-1-i]=c;
}
   
printf("reverse is \n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);	
}
}


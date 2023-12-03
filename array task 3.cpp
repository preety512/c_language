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
	for(p=1;p<=n-1;p++)
	{
		for(i=0;i<n-1-p;i++)
		{
			if(a[i]>a[i+1])
			{
				c=a[i];
				a[i]=a[i+1];
				a[i+1]=c;
			}
		}
		printf("sorted array is %d ");
		for(i=o;i<n;i++ ){
			printf("%d ",a[i]);
		}
		}

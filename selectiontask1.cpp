#include<stdio.h>
main()
{
	int  n,i, j,min,index;
	printf("enter size of array ");
	scanf("%d",&n);
	int a[n];
	printf("enter all number");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<=n-2;i++)
	{
	min=a[i],index=i;
	for(j=i+1;j<=n-1;j++)
	{
		if(min>a[j])
		{
			min=a[j];
			index=j;
		}
		}
		a[index]=a[i];
		a[i]=min;	
	}
	printf("sorted list is\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	
}

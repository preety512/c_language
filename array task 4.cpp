//wap to find largest  of given number
#include<stdio.h>
main()
{
	int n,i,max;
	printf("enter size of array");
	scanf("%d",&n);
	int a[n];
	printf("enter all number");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
{
	if(max<a[i])
	max=a[i];
}
printf("largest number is %d ",max);
}

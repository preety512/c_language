//wap to store n number from user using malloc function then find sum of all number
#include<stdio.h>
#include<stdlib.h>
main()
{
	int n,s=0,i,*p;
	printf("enter of elements of to be stored");
	scanf("%d",&n);
	p=(int*)malloc(n *sizeof(int));
	printf("enter all number");
	for(i=0;i<n-1;i++)
	{
		scanf("%d ",p+i);
		s=s+*(p+i);
	}
	printf("sum of all elements=%d",s);
}

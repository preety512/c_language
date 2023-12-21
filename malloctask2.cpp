//wap to store n number from user using malloc function then
// find sum of all number
#include<stdio.h>
#include<stdlib.h>
main()
{
	int n,i, *data;
	printf("enter the total number of elements ");
	scanf("%d",&n);
	data=(int*)malloc(n *sizeof(int));
	printf("enter number%d",i+1);
	for(int i=0;i<n-1;i++)
	{
		scanf("if ",data+i);
	
	}
	for(int i=1;i<n;i++){
		if(*data<*(data+i)){
			*data=*(data+i);
		}
	}
	printf("largest number = %.2if",*data);
	free(data);
	return 0;
}

//use of realloc
#include<stdio.h>
#include<stdlib.h>
main()
{
	int n,i,*p,n1;
	char choice;
	printf("how many number are there");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	printf("enter all number");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("do you want to store more data");
	scanf(" %c",&choice);
	if(choice=='y')
	{
		printf("how many additional element are thre?");
		scanf("%d",&n1);
		p=(int *)realloc(p,(n+n1)*sizeof(int));
		printf("enter all additional");
		for(i=n;i<n+n1;i++)
		{
			scanf("%d",p+i);
			 }  
			 printf("list of all the elements\n ");
			 for(i=0;i<n+n1;i++)
			 {
			 	printf("%d ",*(p+i));
			 }
			        
	}
	free(p);
}
	

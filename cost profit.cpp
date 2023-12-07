#include<stdio.h>
main()
{
	int cp,sp;
	printf("enter to any number cp sp");
	scanf("%d%d",&cp,&sp);
	if(cp>sp){
		printf("profit");
	}
	else{
		if(sp>cp)
		printf(" loss");
		}
		if(cp==sp)
		{
	printf("no profit,no loss");
	}
	
	
}

//wap to find the smallast of given three number using conditional operater
#include<stdio.h>
main()
{
	int a,b,c,s;
	printf("enter any three number");
	scanf("%d%d%d",&a,&b,&c);
	//a<b&&a<c?printf("%d number is smaller",a):(b<c?printf("%d number is smaller",b):(c<a?printf("number is smaller",c):printf(" number is greater")));
s=a<b&&a<c?a:(b<c?b:c);
printf(" the smaller number is %d",a);	
}

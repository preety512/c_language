#include<stdio.h>
 int sum (int,int );//prototype
  int  sum (int a,int b)
     {
     return (a+b);
     }
     main()
     {
     	int a,b,s;
     	printf("enter two number");
     	scanf("%d%d",&a,&b);
     	s=sum(a,b);
     	printf("sum=%d",s);
     	
	 }

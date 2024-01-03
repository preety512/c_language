//. wap to print fibonacci  series from 1to n
 #include<stdio.h>
 main()
 {
 	int first,second,next,n,i;
 	printf("enter number of terms");
 	scanf("%d",&n);
 	first=0;
 	second=1;
 	printf("%d %d",first,second);
 	for(i=1;i<=n;i++)
 	{
 		next=first+second;
 		printf(" %d ",next);
 		first=second;
 		second=next;
 		
	 }
 }

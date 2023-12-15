 //wap to prin fibonacci series upto n terms fibonacci series
 //o.1.1.2.3.5.8.13.21.34.55.89.......... 
 #include<stdio.h>
 main()
 {
 	int first,second,next,i,n;
 	printf("enter number of terms");
 	scanf("%d",&n);
 	first=0;
 	second=1;
 	printf("%d %d",first,second);//printing first to terms
 	for(i=1;i<=n-2;i++)
 	{
 		next=first+second;
 		printf(" %d ",next);
 		first=second;
 		second=next;
 		
	 }
 }

#include<stdio.h>
 main()
 {
 	int i,j;
 	for(i=1;i<=4;i++)                                                               
 	{
 		for(j=1;j<=i;j++)
		 {
 			printf("%c",'A'+j-1);
		 }
		 printf("\n");
	 }
 }

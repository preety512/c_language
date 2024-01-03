//wap to print fibonacci  series  till n number

#include <stdio.h>
main()
{
	int n ,first=0,second=1,next;
	 printf("Enter the value of n:");
	 scanf("%d",&n);
	 printf("fibonacci series:",n);
	 while(first<=n)
	 {
	 printf("%d",first);
	 next=first+second;
	 first=second;
	 second=next;
	 }
	 
}

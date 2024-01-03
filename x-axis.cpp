//wap to find check whether a given  point (x,y)lies on x-axis,yaxis ,or origin
#include<stdio.h>
main()
{
	int x,y;
	printf("enter any two number");
	scanf("%d%d",&x,&y);
	x==0&&y!=0?printf("point lies on y-axis"):(y==0&&x!=0?printf("point lies on x-axis"):printf("point lies on origin"));
	
}

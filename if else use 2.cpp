#include<stdio>
main()
{
	int x1,x2,y1, y2,r;
	float d;
	printf("enter the valuse of x1,x2,y1,y2 ");
	scanf("%d%d%d%d%d",&x1,&x2,&y1,&y2,&r);
	d=sqrt(pow((x2-x1),2)+pow(y2-y1)2);
	if(d>r)
	{
		printf("outside of circle");
	}
	else{
		if(d<r){
			printf("inside of circle");
		}
		
	}
	
	
	
	
	
}









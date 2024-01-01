 //marks of five subject of a student are given by user wap to find divition 
 //of the student division is given according to the following criteria
 //2.if percentage is more than ar equal to 60 first division
 //3.50<=percentage <60-second division
 //4.40<=percentage<50-third division
 //5.if percentage is less than 40-fail   
	
	
	#include<stdio.h>
main()
{
	int a,b,c,d,e,s;
	printf("enter subject marks");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	s=(a+b+c+d+e/500*100);
	if(s>60)
	{
		printf("first division");
	}
	else if(s>=50&&s<60)
	{
	
	printf("second division");
	}
	else if(s>=40&&s<50){
		printf("third division");
	}
	else{
		printf("fail");
	}
	
	
}

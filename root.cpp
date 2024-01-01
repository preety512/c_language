#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter values of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	switch(d>0){
		case 1:
			printf("root are real and distinct");
			break;
			case 0:
				switch(d<0){
				printf("root of imaginary");
				break;
				case 0:
				printf("roots are real and equal");
				}
	}
	
}

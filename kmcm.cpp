#include<stdio.h>
main()
{
	float m,km,cm;
	printf("enter distence to convert meter to kilometer:");
	scanf("%f",&m);
	km=m/1000;
	cm=m/100;
	printf(" %f meter in kilometer is = %f",m,km);
	printf(" %f m in centimeter is = %f",m,cm);
	
}

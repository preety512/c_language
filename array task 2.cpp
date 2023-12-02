#include<stdio.h>
main()
{
	int a[6],i,s=0;
	float avg;
	printf("enter 6 number");
	for(i=0;i<=6;i++){
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	avg=s/6.0;
	printf("avg=%f",avg);
}

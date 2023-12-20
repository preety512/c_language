#include<stdio.h>
     int main()
     {
     	long n,m,s=0,h=1;
     	printf("enter number");
     	scanf("%d",&n);
     	for(m=1;m<=n;m++){
     		h=h*m;
     		s=s+h;
		 }
     	printf("%1d",s);
     	
	 }

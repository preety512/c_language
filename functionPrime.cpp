//prime number by using function
#include<stdio.h>
int prime(){
	int i,n,a=0;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++){
		if(i%2==0){
			a++;
		}
	}
	if(a==0){
		printf("%d is prime number");
	}
	else{
		printf("%d is not prime number");
	}
}

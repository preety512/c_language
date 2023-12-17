//factorial function
#include<stdio.h>
int fact(){
	int i,f=1,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		f=f*i;
	}
	//printf("factorial is : %d",f);
	return (f);
}
int main(){
	printf("Enter any number : ");
	printf("Factorial : %d",fact());
	return 0;
}

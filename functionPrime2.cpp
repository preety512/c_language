//prime number by using function
#include<stdio.h>
int prime(){
	int i,n,a=0;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			a++;
		}
	}
	if(a==0){
		printf("prime number");
	}
	else{
		printf("not prime number");
	}
	
}
int main(){
	printf("Enter any number : ");
	prime();
}

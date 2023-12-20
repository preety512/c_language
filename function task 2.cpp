  //swaping 
   #include<stdio.h>
void swap(int *,int *);
main(){
	int a,b;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf(" after swaping a=%d,b=%d",a,b);
}
		void swap(int *x,int *y)
	{
			*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;

	}


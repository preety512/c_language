//.wap to create array(10 elements)and check  a given number is present or not.
#include<stdio.h>
int main() {
    int arr[10] = {5, 3, 6, 8, 3, 9, 3, 2, 7, 3};
    int num;
         printf("Enter the number to check:");
    scanf("%d",&num);
    int temp=0;
    for(int i=0;i<10;i++) {
        if (arr[i] == num) {
        temp=1;
        break;
        }
    }
    if(temp){
    	printf("persent")
	}
	else{
		printf("not persent")
	}
}

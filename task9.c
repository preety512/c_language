//wap to create an array (10 elements )and check how many times (occurance)a given number is 
#include <stdio.h>
int main() {
    int arr[10] = {5, 3, 6, 8, 3, 9, 3, 2, 7, 3};
    int  num,count=0;
         printf("Enter any number to check:");
    scanf("%d",&num);
    for(int i=0;i<10;i++) {
        if (arr[i] == num) {
        count++;
        }
    }
    printf("The number %d occurs %d times in the array.\n", num, count);

}


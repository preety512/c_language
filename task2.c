//1.wap in c to 2 number with 3 variable and without using 3rd variable
#include <stdio.h>
/*int main() {
    int a,b;
    printf("Enter the first and second number :");
    scanf("%d %d",&a ,&b);
    printf("Before swapping: %d %d\n", a, b);
    a = a + b; 
    b = a - b; 
    a = a - b;
    
    printf("After swapping: %d %d\n", a, b);
}*/
int main() {
    int a,b,c;
    printf("Enter any number :");
    scanf("%d %d",&a ,&b);
    printf("Before swapping: %d %d\n", a, b);
    c = a + b; 
    a= c - b; 
    b = c - b;
    printf("After swapping: %d %d\n", a, b);
}


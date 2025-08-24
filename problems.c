#include <stdio.h>
// Arithmetic operations
int arithmetic(){
    int num1, num2, num3;
    float sum, avg;

    num1 = 10;
    num2 = 20;
    num3 = 40;
    
    // Finding Sum
    sum = num1 + num2 + num3;
    printf("Sum: %f\n", sum);

    // Finding Average
    avg = sum/3;
    printf("Average %f\n", avg);

    // Taking Input From User
    int num4, num5;
    printf("Enter 2 Integers with space in between\n");
    scanf("%d %d",&num4, &num5);

    // Finding Product
    printf("Product: %d\n",num4*num5);

    return 0;
}

int main(){
    arithmetic();
}
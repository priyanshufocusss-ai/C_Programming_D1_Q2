/*Write a C program to swap two numbers input by user using Bitwise XOR(^)*/
#include<stdio.h>
int main(){
    int num1,num2;
    scanf("%d%d", &num1, &num2);
    num1 = num1^num2;
    num2 = num1^num2;
    num1 = num1^num2;
    printf("After swapping the numbers the resukt is: %d and %d",num1, num2);
}
// Author - Priyanshu Verma 

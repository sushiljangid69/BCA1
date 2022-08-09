/*
    @author Sushil Jangid
    Q1. Write a program to swap two numbers with using third variable.
*/
#include<stdio.h>
int main(){
    int n1,n2,temp;
    printf("Enter first number:\t");
    scanf("%d",&n1);
    printf("Enter second number:\t");
    scanf("%d",&n2);

    //logic
    temp = n1;
    n1 = n2;
    n2 = temp;

    printf("Numbers after swaping:\n");
    printf("First Number: %d\n",n1);
    printf("Second Number: %d",n2);
    return 0;
}
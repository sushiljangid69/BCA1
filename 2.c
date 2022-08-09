/*
    @author Sushil Jangid
    Q2. Write a program to swap two numbers without using third variable.
*/
#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter first number:\t");
    scanf("%d",&n1);
    printf("Enter second number:\t");
    scanf("%d",&n2);

    //logic
    n1 = n1+n2;
    n2 = n1-n2;
    n1 = n1-n2;

    printf("Numbers after swaping:\n");
    printf("First Number: %d\n",n1);
    printf("Second Number: %d",n2);
    return 0;
}
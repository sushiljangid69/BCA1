/*
    @author Sushil Jangid
    Q3. Write a program to check whether a number is even or odd.
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter number:\t");
    scanf("%d",&n);

    //logic
    if(n%2 == 0)
        printf("Even Number");
    else
        printf("Odd Number");
    
    return 0;
}
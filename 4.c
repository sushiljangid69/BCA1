/*
    @author Sushil Jangid
    Q4. Write a program to calculate sum and percentage of 6 subjects marks entered by the user.
*/
#include<stdio.h>
int main(){
    int s1,s2,s3,s4,s5,s6,sum;
    float per;

    printf("Enter 1st subject marks:\t");
    scanf("%d",&s1);
    printf("Enter 2nd subject marks:\t");
    scanf("%d",&s2);
    printf("Enter 3rd subject marks:\t");
    scanf("%d",&s3);
    printf("Enter 4th subject marks:\t");
    scanf("%d",&s4);
    printf("Enter 5th subject marks:\t");
    scanf("%d",&s5);
    printf("Enter 6th subject marks:\t");
    scanf("%d",&s6);

    //logic
    sum = s1+s2+s3+s4+s5+s6;
    per = (float) sum/6; //explicit type casting into float

    printf("Total Score: %d",sum);
    printf("\nPercentage: %0.2f%%",per); //%% is for % sign
    return 0;
}
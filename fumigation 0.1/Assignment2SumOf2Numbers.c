#include<stdio.h>

int main(void){

    int number1;
    float number2,sum;

    printf("enter 2 numbers: \n");
    scanf("%d %f",&number1,&number2);
    sum=number1+number2;
    printf("the sum of the given nubmers is : %f",sum);

    return 0;
}
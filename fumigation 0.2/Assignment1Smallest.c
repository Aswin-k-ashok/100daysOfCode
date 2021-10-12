#include <stdio.h>

int main (void){

    int num1,num2,num3,smal;

    printf("enter 3 numbers : \n");
    scanf("%d %d %d",&num1,&num2,&num3);


    smal = num1 < num2 ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3) ;
 
    printf("\nThe smalest number is : %d", smal) ;

    return 0;
}
#include<stdio.h>

int main(void){

    int wknbr;//week number
    printf("enter the a number\n1:sunday\n2:monday\n3:tuesday\n4:wednesday\n5:thursday\n6:friday\n7:saturday\n");
    scanf("%d",&wknbr);

    switch(wknbr){
        case 1:
        printf("Today is Sunday");
        break;
    
        case 2:
        printf("Today is monday");
        break;

        case 3:
        printf("Today is tuesday");
        break;

        case 4:
        printf("Today is wednesday");
        break;

        case 5:
        printf("Today is Thursday");
        break;

        case 6:
        printf("Today is Friday");
        break;

        case 7:
        printf("Today is Saturday");
        break;

        default:
        printf("please enter a valid date");

    }


    return 0;
}
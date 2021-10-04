#include<stdio.h>

int main(void){

    float totalMark,flag=0;

    printf("enter the the mark you got: ");
    scanf("%f",&totalMark);

    if (totalMark<50){
        printf("you have failed");
        flag=1;
    }
    else if(totalMark>100){
        printf("enter a valid mark!");
        flag=1;
    }
    else if(totalMark>=90){
        printf("A");
    }
    else if(totalMark>=80){
        printf("B");
    }
    else if(totalMark>=70){
        printf("C");
    }
    else if(totalMark>=60){
        printf("D");
    }
    else if(totalMark>=50){
        printf("E");
    }
    if(flag==0){
    printf(" grade");
    }

    return 0;
}
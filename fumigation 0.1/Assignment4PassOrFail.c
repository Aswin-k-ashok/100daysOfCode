#include <stdio.h>
int main (void){

    float mark;
    printf("enter your mark: ");
    scanf("%f",&mark);

    if(mark>50){
        printf("you got %g on 100 you have PASSED",mark);
    }
    else{
        printf("you got only %g , And you have FAILED better luck next time",mark);
    }

    return 0;
}
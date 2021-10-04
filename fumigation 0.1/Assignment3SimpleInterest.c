#include <stdio.h>

int main(void){
    float principle,rateOfInterest,numbofTerm,simpleInterest;

    printf("enter the principle amount: ");
    scanf("%f",&principle);

    printf("enter the rate of Interest: ");
    scanf("%f",&rateOfInterest);

    printf("enter the numbeofYear: ");
    scanf("%f",&numbofTerm);

    simpleInterest=(principle*rateOfInterest*numbofTerm)/100;

    printf("THE SIMPLE INTEREST IS %f",simpleInterest);


}
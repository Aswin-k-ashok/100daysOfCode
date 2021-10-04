#include <stdio.h>

int main(void){
    int multiplier,lmt,result,i;

    printf("enter the limit of the multiplication table: ");
    scanf("%d",&lmt);

    printf("enter the multiplier: ");
    scanf("%d",&multiplier);

    for(i=0;i<=lmt;i++){
        result=multiplier*i;
        printf("%d x %d = %d\n",i,multiplier,result);
    }




    return 0;
}
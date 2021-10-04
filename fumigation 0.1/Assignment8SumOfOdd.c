#include <stdio.h>

int main(void){
    int limit,i,sum=0;
    printf("enter the disierd limit: ");
    scanf("%d",&limit);

    for(i=0;i<limit;i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }

    printf("sum of the odd numbers in the limit: %d",sum);
    

    return 0;
}
#include <stdio.h>

int main(void){

    int i,j,lmt,n=2;
    int ary[100];

    printf("enter a limit : ");
    scanf("%d",&lmt);

    for(i=1;i<lmt;i++){
        ary[i]=i;
    }
    printf("2 ");
    for(i=2;i<lmt;i++){
        if(i%i==0){

            if(i%n!=0){
            printf("%d ",i);
        }
        }
    }

    return 0;
}
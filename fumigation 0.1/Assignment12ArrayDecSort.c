#include <stdio.h>

int main(void){

    int ary[100];
    int lmt,i,j,temp;

    printf("enter the array size: ");
    scanf("%d",&lmt);

    printf("enter the array values\n");
    for(i=0;i<lmt;i++){
        scanf("%d",&ary[i]);
    }

    for(i=0;i<lmt-1;i++){
        for(j=i+1;j<lmt;j++){
            if(ary[i]<ary[j]){
                temp=ary[i];
                ary[i]=ary[j];
                ary[j]=temp;
            }
        }
    }

    printf("sorted array: ");
    for(i=0;i<lmt;i++){
        printf("%d ",ary[i]);
    }

    return 0;
}
#include <stdio.h>

int main(void){

    int ary[100];
    int lmt,i,j;

    printf("enter the array size: ");
    scanf("%d",&lmt);

    printf("enter the array elements\n");
    for(i=0;i<lmt;i++){
        scanf("%d",&ary[i]);

    }

    for(i=0;i<lmt;i++){
        for(j=i+1;j<lmt;j++){
            if(ary[i]==ary[j]){
                ary[j]=-1;
            }
        }
    }

    for(i=0;i<lmt;i++){
        if(ary[i]!=-1){
            printf("%d ",ary[i]);
        }
    }

    return 0;
}


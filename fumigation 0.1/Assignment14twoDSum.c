#include <stdio.h>

int main(void){

    int ary1[100][100],ary2[100][100],sum[100][100];
    int i,j,size;

    printf("enter the size of the array: ");
    scanf("%d",&size);

    printf("enter the values of first array: \n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&ary1[i][j]);
        }
    }

    printf("enter the values of the second array: \n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&ary2[i][j]);
        }
    }

    printf("sum of the arrays: \n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            sum[i][j]=ary1[i][j]+ary2[i][j];
        } 
    }

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
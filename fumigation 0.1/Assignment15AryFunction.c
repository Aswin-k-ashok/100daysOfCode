#include <stdio.h>

int getArray(int[],int);
void displayArray(int[],int);
int main (void){

    int ary[50];
    int result[50];
    int limit=0;
    printf("enter the array size: \n");
    scanf("%d",&limit);

    ary[50]=getArray(ary,limit);

    displayArray(ary[50],limit);

    return 0;
}

int getArray(int arry[],int lmt){
    int i=0;
    printf("enter the array elements: \n");
    for(i=0;i<lmt;i++){
        scanf("%d",&arry[i]);
        return arry;
    }
}

void displayArray(int arry[],int lmt){
    int i=0;
    printf("the enterd array is\n");
    for(i=0;i<lmt;i++){
        printf("%d ",arry[i]);
    }
}
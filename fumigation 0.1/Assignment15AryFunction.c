#include <stdio.h>
void getArray(int[]);
void displayArray(int[],int);

int main(void){
    int ary[50];

    getArray(ary);
    

    return 0;
}

void getArray(int ary[]){
    int i,lmt;

    printf("enter the array size: ");
    scanf("%d",&lmt);

    printf("enter the array values: \n");
    for(i=0;i<lmt;i++){
        scanf("%d",&ary[i]);
    }

    displayArray(ary ,lmt);
}

void displayArray(int arry[],int limt){

    int i;
    printf("the enterd array is\n");
    for(i=0;i<limt;i++){
        printf("%d ",arry[i]);
    }
    
}
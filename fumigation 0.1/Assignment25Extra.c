#include <stdio.h>

void CrosPrint(int,int);
int main(void){

    int iter=1;
    int lmt=0;
    printf("enter a limit: ");
    scanf("%d",&lmt);

    CrosPrint(iter,lmt);


    return 0;
}

void CrosPrint(int i,int lmt){

    if(i<=lmt){

        printf("cross Roads \n");
        CrosPrint(i+1,lmt);
        
    }

    
}
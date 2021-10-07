#include <stdio.h>

void CrosPrint(int);
int main(void){

    int lmt=1;
    CrosPrint(lmt);

    return 0;
}

void CrosPrint(int i){

    if(i<=12){

        printf("cross Roads \n");
        CrosPrint(i+1);
        
    }

    
}
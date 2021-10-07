# include <stdio.h>
int main (void){

    int row=0;
    int col=0;
    int lmt=6;
    int spc=6;

    for(row=1;row<=lmt;row++){
        for(spc=0;spc<=(lmt-row);spc++)
        printf(" ");
        for(col=1;col<=row;col++){

            if(col==1||col==row){ 
            printf("%d ",1);
            }
            else{
                printf("%d ",col);
            }
           
        }
        printf("\n");
    }
    return 0;
}
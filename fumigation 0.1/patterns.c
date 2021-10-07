#include <stdio.h>

int main(void){

    int row;
    int col;
    int num=5;
    int space;


    for(row=1;row<=num;row++){  //hollw square
        for(col=1;col<=num;col++){
            if(row==1||row==num||col==1||col==num){
                printf("#");
            }
            else{
                printf(" ");
            
            }
        }
        printf("\n");
    }
///////////////////////////////////////////////////////
printf("22\n\n");

for(row=1;row<=num;row++){   // half pyramid
    for(col=1;col<=row;col++){
        printf("#");
    }
    printf("\n");
}



    /////////////////////////////////////////////////////////////////////
printf("34\n\n");
    for(row=1;row<=num;row++){   //inverted half pyramid
        for(col=row;col<=num;col++){
            printf("@");
        }
        printf("\n");
    }

////////////////////////////////////////////////////

printf("44\n\n");

    for(row=1;row<=num-1;row++){       // half diamond
        for(col=1;col<=row;col++){
            printf("*");
        }
        printf("\n");
    }
    for(row=1;row<=num;row++){
        for(col=row;col<=num;col++){
            printf("*");
        }
        printf("\n");
    }

////////////////////////////////////////////////////////

printf("61\n\n");

    for(row=1;row<=num;row++){           //full pyramid
        for(space=1;space<=(num-row);space++)
            printf(" ");
        for(col=1;col<=row;col++){
            printf(" *");
        }
        printf("\n");
        }

////////////////////////////////////////////////////

printf("76\n\n");   //inverted full pyramid

for(row=1;row<=num;row++){    
    for(space=1;space<=row;space++)
    printf(" ");
    for(col=row;col<=num;col++){
        printf(" *");
    }
    printf("\n");
}
        

/////////////////////////////////////////////////////
printf("89\n\n");  

for(row=1;row<=num;row++){    //diamond
    for(space=1;space<=(num-row);space++)
    printf(" ");
    for(col=1;col<=row;col++){
        printf(" *");
    }
    printf("\n");
}

for(row=1;row<=num;row++){
    for(space=1;space<=row;space++)
        printf(" ");
        for(col=row;col<num;col++){
        printf(" *");
        }
    printf("\n");
}





    ////////////////////////////////////////////////////////

    return 0;
}

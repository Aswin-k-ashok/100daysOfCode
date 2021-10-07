#include <stdio.h>

int main(void){

    char st1[50];
    char st2[50];
    int length1=0;
    int length2=0;
    int i=0;
    int flag=0;


    printf("enter a word: ");
    scanf("%s",&st1 );
    printf("enter another word: ");
    scanf("%s",&st2);

    for(i=0;st1[i]!='\0';i++){
        length1++;
    }

    for(i=0;st2[i]!='\0';i++){
        length2++;
    }
    
    if(length1!=length2){
        printf("\n\nthe strings are different\n\n");
    } 

    else{
        for(i=0;i<length1;i++){
            if(st1[i]==st2[i]){
                flag=1;
            }
        }
    }

    if(flag==1){
        printf("\n\nthe stings are identical\n\n");
    }




    return 0;
}
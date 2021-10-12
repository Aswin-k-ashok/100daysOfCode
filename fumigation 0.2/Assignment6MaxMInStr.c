#include <stdio.h>
#include <string.h>

int main(void){

int i,j,count=0,lmt,mcount=0,temp=0;
char word[100],store[100];

    printf("enter a word: ");
    scanf("%s",word);

    for(i=0;word[i]!='\0';i++){
        lmt++;   
    }

    for(i=0;i<lmt;i++){
        for(j=i+1;j<lmt;j++){
            if(word[i]==word[j]){
                temp=word[i+1];
                word[i+1]=word[j];
                word[j]=temp;

            }
        }
    }

    printf("\n %c is the most occured character in the word", word[0]);
    printf("\n %c is the least occuring character in the word", word[lmt-1]);

    



    return 0;
}
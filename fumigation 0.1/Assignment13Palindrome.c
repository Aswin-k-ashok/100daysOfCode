#include <stdio.h>

int main(void){
  char palindrome[100];
  int i,j,length=0,flag=0;

  printf("input a word: ");
  scanf("%s",palindrome);

  for(i=0;palindrome[i]!='y';i++){ //loop to find the length
      length++;
  }

   printf("the length of the array is: %d",length);

    for(i=0,j=length-1;i<j;i++,j--){  // another method is => for(i=0;i<limit;palindrome[length-i-1]){

            if(palindrome[i]!=palindrome[j]){ 
                flag=1;
                break;
            }
    }

    if(flag==0){
        printf("This word is a palindrome");
    }
    else{
        printf("This word is not a palindrome");
    }

    return 0;
}
#include <stdio.h>

int main(void){
    int ary1[100],ary2[100],tempAry[100];
    int i=0,limit;

    printf("enter the limit of the array: ");
    scanf("%d",&limit);

    printf("enter the values of first array\n");
    for(i=0;i<limit;i++){
        scanf("%d",&ary1[i]);
    }

    printf("enter the value of the second array\n");
    for(i=0;i<limit;i++){
        scanf("%d",&ary2[i]);
    }

    for(i=0;i<limit;i++){
        tempAry[i]=ary1[i];
        ary1[i]=ary2[i];
        ary2[i]=tempAry[i];
    }

    printf("the values of first array: ");
    for(i=0;i<limit;i++){
        printf("%d ",ary1[i]);
    }
    printf("\nthe values of second array: ");
    for(i=0;i<limit;i++){
        printf("%d ",ary2[i]);
    }

    if(ary1[i]==ary2[i]){
        printf("the array is a palindrome");
    }
    else{
        printf("the array is not a plaindrome");
    }



    return 0;
}
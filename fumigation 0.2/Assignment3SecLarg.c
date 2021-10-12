#include <stdio.h>

int main(void){

    int i,j,sl,temp,lmt;
    int ary[100];

    printf("enter the array size: ");
    scanf("%d",&lmt);

    printf("enter the array elements: \n");
    for(i=0;i<lmt;i++){
        scanf("%d",&ary[i]);
    }
    
    for(i=0;i<lmt;i++){
        for(j=i+1;j<lmt;j++){
            if(ary[j]>ary[i]){
            temp=ary[i];
            ary[i]=ary[j];
            ary[j]=temp;
            }
        }
    }

    for(i=0;i<lmt;i++){
        if(ary[i]!=ary[0]){
            sl=ary[i];
            break;
        }

    } 

    printf("The second largest element is %d ",sl);

 

    return 0;
}
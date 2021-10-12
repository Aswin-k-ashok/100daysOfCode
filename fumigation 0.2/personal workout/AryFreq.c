#include <stdio.h>

int main(void){

    int ary1[100],ary2[100];
    int lmt,i,j,count=0;


    printf("enter the array limit: ");
    scanf("%d",&lmt);

    printf("enter the array elements: \n");

    for(i=0;i<lmt;i++){
        scanf("%d",&ary1[i]);
    }

    for(i=0;i<lmt;i++){
        count=1;
        if(ary1[i]!=-1){
            for(j=i+1;j<lmt;j++){
                if(ary1[i]==ary1[j]){
                    ary1[j]=-1;
                    count++;
                }
            }
        }

        ary2[i]=count;
    }


    printf("the frequency of the given each number in the array is : \n");

    for(i=0;i<lmt;i++){
        if(ary1[i]!=-1){
            printf("number %d repeated %d times \n",ary1[i],ary2[i]);
        }
    }


    return 0;
}
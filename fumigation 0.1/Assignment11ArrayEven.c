#include <stdio.h>
int main(void){

    int ary[100];
    int limit,i,count=0;

    printf("enter the size of the array: ");
    scanf("%d",&limit);

    printf("enter the array values\n");
    for(i=0;i<limit;i++){
       scanf("%d",&ary[i]);
       if(ary[i]%2==0){
           count++;
       }
    }
    printf("number of even number in the given array is: %d",count);

    
    return 0;
}
#include <stdio.h>

int main (void){
    int num,i,len=0,lmt,store,rem=0,result=0,ps=0,str=0;
    int power=1;

    printf("enter a number: ");
    scanf("%d",&num);
    str=num;
    store=num;

    while (store!=0)
    {
        store=store/10;
        len++;
    }
    
    lmt=len;
    
    while(num!=0){
        rem=num%10;
        while (lmt!=0)
        {
            power=power*rem;
            lmt--;
        }
       result=result+power;
       lmt=len;
       num=num/10;
        power=1;
    }

    if(str==result){
        printf("the enterd number is amstrong");
    }
    else{
        printf("the number is not amstrong");
    }



    

    return 0;
}
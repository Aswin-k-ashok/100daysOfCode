#include<stdio.h>

int intlen(int store) {
    int len;
    while (store != 0) { // code to find the length of a given integer
        len++;
        store = store / 10;
    }
    return len;
}

int intpower(int len, int num) {
    long power = 1;
    int i;
    for (i = 0; i < len; i++) { // code to find the power of a given n number according to its length
        power = power * num;

    }
    return power;
}


int main(void) {

    int num = 0, len, i, result, rem;
    long power = 1;
    int ary[1000];

    printf("enter a number to check wether to check armstrong or not: ");
    scanf("%d", & num);

    len = intlen(num);
    //power=intpower(len,num);

    while (num != 0) {
        rem = num % 10;
        for (i = 0; i < len; i++) {
            result = intpower(len, rem);

            ary[i] = result;
            num = num / 10;
        }

    }


    for (i = 0; i < len; i++) {
        printf("%d ", ary[i]);
    }



    // printf("%d",sqr);



    return 0;
}
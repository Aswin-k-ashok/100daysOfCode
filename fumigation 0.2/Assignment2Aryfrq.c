#include <stdio.h>

int main(void) {

    int lmt, i, j, count;
    int array[100];
    int frqary[100];


    printf("enter the array size: ");
    scanf("%d", & lmt);

    printf("enter the array elemnts: \n");
    for (i = 0; i < lmt; i++) {
        scanf("%d", & array[i]);
    }

    for (i = 0; i < lmt; i++) {
        count=1;
        if (array[i] != -1) {
            for (j = i + 1; j < lmt; j++) {
                if (array[i] == array[j]) {
                    array[j] = -1;
                    count++;
                }
            }
        }
        frqary[i] = count;
    }

    for (i = 0; i < lmt; i++) {
        if(array[i]!=-1){
            printf("%d is %d times\n", array[i], frqary[i]);
        }
    }

    return 0;

}
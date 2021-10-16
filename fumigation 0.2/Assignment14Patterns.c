#include <stdio.h>

int main(void) {
    int r, c;
    int i, j, n, count = 0, count1 = 0, k = 0;

    printf("enter a limit: ");
    scanf("%d", & n);

    for (r = 1; r <= n; r++) { //column number half pyramid
        for (c = 1; c <= r; c++) {
            printf("%d ", c);
        }
        printf("\n");
    }

    printf("\n\n");

    for (r = n; r >= 1; r--) { //column number inverted half pyramid
        for (c = 1; c <= r; c++) {
            printf("%d ", c);
        }
        printf("\n");
    }

    printf("\n\n");

    for (r = 1; r <= n; r++) { //column number hollow inverted half pyramid
        for (c = 1; c <= r; c++) {
            if (r == n || c == 1 || c == r) {
                printf("%d ", c);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\n\n");




    for (i = 1; i <= n; i++) { //palindrome pyramid
        for (j = 1; j <= n - i; j++) {
            printf(" ");
            ++count;
        }

        while (k != 2 * i - 1) {
            if (count <= n - 1) {
                printf("%d", i + k);
                ++count;
            } else {
                ++count1;
                printf("%d", (i + k - 2 * count1));
            }
            ++k;
        }
        count1 = count = k = 0;

        printf("\n");
    }

    printf("\n\n"); // hollow column pyramid

    for (r = 1; r <= n; r++) {
        for (j = 1; j <= n - r; j++)
            printf(" ");
        for (c = 1; c <= r; c++)
            if (r == c || r == n || c == 1) {
                printf("%d ", c);
            }
        else {
            printf("  ");
        }

        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int totalRows = 2 * n - 1;

    for (int i = 1; i <= totalRows; i++) {
        int spaces, stars;

        if (i <= n) {
            spaces = n - i;
            stars = 2 * i - 1;
        } else {
            spaces = i - n;
            stars = 2 * (totalRows - i) + 1;
        }

       
        for (int s = 0; s < spaces; s++) {
            printf(" ");
        }

     
        for (int j = 1; j <= stars; j++) {
            if (j == 1 || j == stars)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}

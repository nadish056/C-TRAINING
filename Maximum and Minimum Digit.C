#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    N = abs(N);   

    int max = 0;
    int min = 9;

    if (N == 0) {
        printf("0 0");
        return 0;
    }

    while (N > 0) {
        int digit = N % 10;

        if (digit > max)
            max = digit;
        if (digit < min)
            min = digit;

        N /= 10;
    }

    printf("%d %d", max, min);
    return 0;
}

#include <stdio.h>

long long factorial(int d) {
    long long fact = 1;
    for (int i = 1; i <= d; i++)
        fact *= i;
    return fact;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long n;
        scanf("%lld", &n);

        long long temp = n;
        long long sum = 0;

        while (temp > 0) {
            int digit = temp % 10;
            sum += factorial(digit);
            temp /= 10;
        }

        if (sum == n)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}

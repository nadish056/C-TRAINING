#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int commonFactors(int a, int b) {
    int gcd, count = 0;

    // Find GCD using Euclidean Algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    // Count factors of gcd
    for (int i = 1; i <= gcd; i++) {
        if (gcd % i == 0)
            count++;
    }

    return count;
}
   
    return 0;
}

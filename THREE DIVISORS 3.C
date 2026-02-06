#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    bool isThree(int n) {
    if (n < 4) return false;

    int root = sqrt(n);
    if (root * root != n) return false;

    // Check if root is prime
    for (int i = 2; i * i <= root; i++) {
        if (root % i == 0)
            return false;
    }

    return root > 1;
}

    return 0;
}

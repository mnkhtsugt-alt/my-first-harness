#include <stdio.h>
#include <limits.h>

long long factorial(int n) {
    if (n < 0) {
        return -1;
    }

    long long result = 1;

    for (int i = 1; i <= n; i++) {
        if (result > LLONG_MAX / i) {
            return -1;
        }
        result *= i;
    }

    return result;
}

int main(void) {
    int n;

    printf("Enter a non-negative integer: ");

    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    long long result = factorial(n);

    if (result == -1) {
        printf("Invalid input or integer overflow.\n");
    } else {
        printf("%d! = %lld\n", n, result);
    }

    return 0;
}

#include <stdio.h>

long long fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter the number of Fibonacci numbers to print: ");
    scanf("%d", &n);

    printf("Fibonacci numbers: ");
    for (int i = 0; i < n; i++) {
        printf("%lld ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
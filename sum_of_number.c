#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = sum + i;   // ya sum += i;
    }

    printf("Sum of first %d numbers = %d\n", n, sum);  // total number

    return 0;
}
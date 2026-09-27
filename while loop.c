#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    while (i <= n) { // A while loop is utilized when the number of iterations is unknown beforehand
        printf("%d\n", i);
        i++;   // i = i + 1;
    }

    return 0;
}
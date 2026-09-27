#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {    // 1 se start aur input number tak
        printf("%d\n", i);  // i value se start
    }

    return 0;
}
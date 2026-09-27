// Even numbers 1 to N

// n input lo

// 1 se n tak saare even numbers print karo using for loop

#include <stdio.h>

int main() {
    int n;

    printf("Enter your number : ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) { // jo 2 se divide ho jaye
        printf("%d\n", i);
    }
}

    return 0;
}
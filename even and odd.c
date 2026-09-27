#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {  // 0 ke equal to will run 
        printf("Number is even.\n");
    } else {  // will run 
        printf("Number is odd.\n");
    }

    return 0;
}
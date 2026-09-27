#include <stdio.h>

int main() {
    int age; //variable

    printf("Enter your age: ");
    scanf("%d", &age); // use age input

    if (age >= 18) {
        printf("Eligible to vote\n");
    } else {
        printf("Not eligible to vote\n");
    }

    return 0;
}
// This is called a nested if else

#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90) { //90 ya 90 se large will run
        printf("Grade: A\n");
    } else if (marks >= 75) { // 75 ya 75 se large will run
        printf("Grade: B\n");
    } else if (marks >= 35) { // 35 ya 35 se large will run
        printf("Grade: C\n");
    } else {
        printf("Fail\n"); // jab sare condition false toh will run
    }

    return 0;
}
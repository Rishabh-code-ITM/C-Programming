#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    if (a > b) { // a large hai to if will run
        printf("a is greater\n");
    } else if (b > a) {  // b large hai else if will run
        printf("b is greater\n");
    } else { // total false to will run 
        printf("Both are equal\n"); //print equal 
    }   
    return 0;
}
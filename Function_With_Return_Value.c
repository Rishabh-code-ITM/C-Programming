#include <stdio.h>
// return value dega
int getNumber() {
    return 10; // 10 return karega
}
int main() {
    int n = getNumber(); // return value pakdi
    printf("Number: %d", n);
    return 0;
}
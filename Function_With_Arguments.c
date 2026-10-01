#include <stdio.h>
// argument wala function - value lega
void greet(char name[]) {
    printf("Hello %s\n", name); // naam print karega
}
int main() {
    greet("Bhai"); // naam bhej ke call kiya
    return 0;
}
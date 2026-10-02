#include <stdio.h>                          // Standard input output library

int main() {                                // Program yahin se start hota hai (main function)
    int i = 10;                             // Integer variable
    float f = 5.5f;                         // Float variable
    char c = 'Z';                           // Character variable
    printf("Integer: %d\n", i);             // %d integer ke liye
    printf("Float: %.1f\n", f);             // %.1f float ko 1 decimal tak print karta hai
    printf("Char: %c\n", c);                // %c character ke liye
    printf("Width: %5d|\n", i);             // %5d se number 5 jagah mein right align hota hai
    printf("Left: %-5d|\n", i);             // %-5d se number left align hota hai
    return 0;                               // Program successfully khatam
}                                           // main function end

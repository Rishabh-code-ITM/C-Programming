#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    int x = 10;                                 // Normal integer variable
    int *p = &x;                                // p pointer hai, x ka address store karta hai (& = address of)
    printf("Value of x = %d\n", x);             // x ki value
    printf("Value via pointer = %d\n", *p);     // *p dereference: pointer ke address par rakhi value
    *p = 25;                                    // Pointer se x ki value badal di
    printf("New value of x = %d\n", x);         // x ab 25 ho gaya
    return 0;                                   // Program successfully khatam
}                                               // main function end

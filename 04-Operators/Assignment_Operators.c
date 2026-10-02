#include <stdio.h>                          // Standard input output library

int main() {                                // Program yahin se start hota hai (main function)
    int x = 10;                             // Simple assignment: x mein 10 store hua
    x += 5;                                 // x = x + 5, ab x = 15
    printf("After += : %d\n", x);           // 15 print hoga
    x -= 3;                                 // x = x - 3, ab x = 12
    printf("After -= : %d\n", x);           // 12 print hoga
    x *= 2;                                 // x = x * 2, ab x = 24
    printf("After *= : %d\n", x);           // 24 print hoga
    x /= 4;                                 // x = x / 4, ab x = 6
    printf("After /= : %d\n", x);           // 6 print hoga
    x %= 4;                                 // x = x % 4, ab x = 2
    printf("After %%= : %d\n", x);          // 2 print hoga
    return 0;                               // Program successfully khatam
}                                           // main function end

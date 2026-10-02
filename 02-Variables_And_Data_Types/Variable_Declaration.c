#include <stdio.h>                          // Standard input output library

int main() {                                // Program yahin se start hota hai (main function)
    int a;                                  // Sirf declaration, abhi value nahi di (garbage value hoti hai)
    a = 10;                                 // Baad mein value assign ki (initialization)
    int b = 20;                             // Declaration aur initialization ek saath
    int x = 1, y = 2, z = 3;                // Ek line mein multiple variables declare kiye
    printf("a=%d b=%d\n", a, b);            // a aur b ki values print karo
    printf("x=%d y=%d z=%d\n", x, y, z);    // x, y, z ki values print karo
    return 0;                               // Program successfully khatam
}                                           // main function end

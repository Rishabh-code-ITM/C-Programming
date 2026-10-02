#include <stdio.h>                              // Standard input output library

#define PI 3.14159                              // Macro constant, compile hone se pehle PI ki jagah 3.14159 replace ho jata hai

int main() {                                    // Program yahin se start hota hai (main function)
    const int DAYS = 7;                         // const keyword: is variable ki value baad mein change nahi kar sakte
    printf("PI = %.5f\n", PI);                  // Macro constant ka use
    printf("Days in week = %d\n", DAYS);        // const variable ka use
    // DAYS = 8;                                // Error aayega, kyunki DAYS constant hai
    return 0;                                   // Program successfully khatam
}                                               // main function end

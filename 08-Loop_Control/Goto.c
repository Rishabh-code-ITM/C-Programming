#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    printf("Start\n");                          // Pehla message
    goto skip;                                  // goto seedha label par jump karta hai
    printf("Yeh line skip ho jayegi\n");        // Yeh kabhi print nahi hogi
skip:                                           // Label: goto yahin aakar rukta hai
    printf("End\n");                            // Jump ke baad yahan se code chalta hai
    return 0;                                   // Program successfully khatam
}                                               // main function end

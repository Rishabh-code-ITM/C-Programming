#include <stdio.h>                                              // Standard input output library

int main() {                                                    // Program yahin se start hota hai (main function)
    printf("Size of char   = %zu bytes\n", sizeof(char));       // sizeof operator memory size bytes mein batata hai
    printf("Size of int    = %zu bytes\n", sizeof(int));        // int ka size (aam taur par 4 bytes)
    printf("Size of float  = %zu bytes\n", sizeof(float));      // float ka size (aam taur par 4 bytes)
    printf("Size of double = %zu bytes\n", sizeof(double));     // double ka size (aam taur par 8 bytes)
    printf("Size of long   = %zu bytes\n", sizeof(long));       // long ka size system par depend karta hai
    return 0;                                                   // Program successfully khatam
}                                                               // main function end

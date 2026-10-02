#include <stdio.h>                                      // Standard input output library

int cube(int n) {                                       // int return type: function ek integer wapas dega
    return n * n * n;                                   // Cube calculate karke wapas bhejo
}                                                       // cube function end

int main() {                                            // Program yahin se start hota hai (main function)
    int result = cube(3);                               // Function ka returned value result mein store hua
    printf("Cube of 3 = %d\n", result);                 // Result print karo
    return 0;                                           // Program successfully khatam
}                                                       // main function end

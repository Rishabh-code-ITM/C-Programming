#include <stdio.h>                                      // Standard input output library

int main() {                                            // Program yahin se start hota hai (main function)
    int a = 5;                                          // Integer variable
    float b = 2.5f;                                     // Float variable
    printf("Address of a = %p\n", (void*)&a);           // %p se memory address print hota hai, &a variable ka address
    printf("Address of b = %p\n", (void*)&b);           // b ka address (a se alag hoga)
    return 0;                                           // Program successfully khatam
}                                                       // main function end

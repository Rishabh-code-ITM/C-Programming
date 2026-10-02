#include <stdio.h>                              // Standard input output library

void greet() {                                  // void matlab function kuch return nahi karega
    printf("Hello from function!\n");           // Function ka kaam: message print karna
}                                               // greet function end

int main() {                                    // Program yahin se start hota hai (main function)
    greet();                                    // Function ko call kiya, control greet() mein jayega
    greet();                                    // Same function dobara call kar sakte hain (code reuse)
    return 0;                                   // Program successfully khatam
}                                               // main function end

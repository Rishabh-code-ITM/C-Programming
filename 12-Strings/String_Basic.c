#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    char str[] = "Hello";                       // String ek char array hai, end mein '\0' (null) apne aap lagta hai
    printf("String: %s\n", str);                // %s se poori string print hoti hai
    printf("First char: %c\n", str[0]);         // Index se ek character access kar sakte hain
    return 0;                                   // Program successfully khatam
}                                               // main function end

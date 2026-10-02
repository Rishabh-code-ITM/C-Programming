#include <stdio.h>                                  // Standard input output library

int main() {                                        // Program yahin se start hota hai (main function)
    char str[] = "Programming";                     // String
    int len = 0;                                    // Length counter 0 se start
    while (str[len] != '\0') {                      // Null character aane tak chalo, wahi string ka end hai
        len++;                                      // Har character par count badhao
    }                                               // while loop end
    printf("Length = %d\n", len);                   // Length print karo
    return 0;                                       // Program successfully khatam
}                                                   // main function end

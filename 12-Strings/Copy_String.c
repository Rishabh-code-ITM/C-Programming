#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    char src[] = "Hello C";                     // Source string
    char dest[50];                              // Destination string, itni jagah honi chahiye
    int i = 0;                                  // Index
    while (src[i] != '\0') {                    // Source ka end aane tak
        dest[i] = src[i];                       // Ek ek character copy karo
        i++;                                    // Agle character par jao
    }                                           // while loop end
    dest[i] = '\0';                             // Destination ke end mein null lagana zaroori hai
    printf("Copied string: %s\n", dest);        // Copy ki hui string print karo
    return 0;                                   // Program successfully khatam
}                                               // main function end

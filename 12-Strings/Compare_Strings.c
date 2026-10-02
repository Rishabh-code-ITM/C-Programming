#include <stdio.h>                                      // Standard input output library

int main() {                                            // Program yahin se start hota hai (main function)
    char s1[] = "apple";                                // Pehli string
    char s2[] = "apple";                                // Dusri string
    int i = 0;                                          // Index
    while (s1[i] != '\0' && s2[i] != '\0') {            // Jab tak dono strings khatam nahi hui
        if (s1[i] != s2[i]) break;                      // Koi character alag mila to ruk jao
        i++;                                            // Agle character par jao
    }                                                   // while loop end
    if (s1[i] == s2[i]) {                               // Agar dono ek saath end par pahunche
        printf("Strings are equal\n");                  // To strings barabar hain
    } else {                                            // Warna
        printf("Strings are not equal\n");              // Barabar nahi hain
    }                                                   // if-else end
    return 0;                                           // Program successfully khatam
}                                                       // main function end

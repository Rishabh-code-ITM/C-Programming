#include <stdio.h>                                              // Standard input output library

int main() {                                                    // Program yahin se start hota hai (main function)
    char str[] = "Programming Language";                        // String
    int vowels = 0;                                             // Vowel counter 0 se start
    for (int i = 0; str[i] != '\0'; i++) {                      // Null aane tak har character par jao
        char c = str[i];                                        // Current character
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u' ||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {           // Small ya capital vowel ho to
            vowels++;                                           // Count badhao
        }                                                       // if block end
    }                                                           // for loop end
    printf("Vowels = %d\n", vowels);                            // Vowels ki ginti print karo
    return 0;                                                   // Program successfully khatam
}                                                               // main function end

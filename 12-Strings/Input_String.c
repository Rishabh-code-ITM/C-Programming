#include <stdio.h>                                  // Standard input output library

int main() {                                        // Program yahin se start hota hai (main function)
    char str[100];                                  // 100 characters tak ki string
    printf("Enter a sentence: ");                   // Sentence maango
    fgets(str, sizeof(str), stdin);                 // fgets spaces ke saath poori line padhta hai (safe hai, size limit ke saath)
    printf("You entered: %s", str);                 // String print karo (fgets newline bhi store karta hai)
    return 0;                                       // Program successfully khatam
}                                                   // main function end

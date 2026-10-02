#include <stdio.h>                          // Standard input output library

int main() {                                // Program yahin se start hota hai (main function)
    char ch;                                // Character store karne ke liye variable
    printf("Enter a character: ");          // User se ek character maango
    ch = getchar();                         // getchar() keyboard se ek character padhta hai
    printf("You entered: ");                // Message print karo
    putchar(ch);                            // putchar() ek character screen par print karta hai
    putchar('\n');                          // Nayi line print karo
    return 0;                               // Program successfully khatam
}                                           // main function end

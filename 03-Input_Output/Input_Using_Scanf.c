#include <stdio.h>                          // Standard input output library

int main() {                                // Program yahin se start hota hai (main function)
    int num;                                // Number store karne ke liye variable
    printf("Enter a number: ");             // User ko batao ki kya input dena hai
    scanf("%d", &num);                      // Keyboard se integer lo, & se variable ka address do
    printf("You entered: %d\n", num);       // Jo number diya tha wahi print karo
    return 0;                               // Program successfully khatam
}                                           // main function end

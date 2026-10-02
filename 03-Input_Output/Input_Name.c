#include <stdio.h>                          // Standard input output library

int main() {                                // Program yahin se start hota hai (main function)
    char name[50];                          // 50 characters tak ka naam store ho sakta hai
    printf("Enter your name: ");            // User se naam maango
    scanf("%49s", name);                    // String input lo (string mein & nahi lagta), space aate hi ruk jata hai
    printf("Hello, %s!\n", name);           // Naam ke saath greeting print karo
    return 0;                               // Program successfully khatam
}                                           // main function end

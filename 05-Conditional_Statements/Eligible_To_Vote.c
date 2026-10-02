#include <stdio.h>                                      // Standard input output library

int main() {                                            // Program yahin se start hota hai (main function)
    int age;                                            // Age store karne ke liye
    printf("Enter your age: ");                         // Age maango
    scanf("%d", &age);                                  // Age input lo
    if (age >= 18) {                                    // India mein vote dene ke liye 18 saal ya zyada hona zaroori hai
        printf("Eligible to vote\n");                   // Vote de sakte ho
    } else {                                            // 18 se kam age
        printf("Not eligible to vote\n");               // Vote nahi de sakte
    }                                                   // if-else block end
    return 0;                                           // Program successfully khatam
}                                                       // main function end

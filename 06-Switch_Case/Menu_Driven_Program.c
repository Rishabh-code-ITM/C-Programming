#include <stdio.h>                                      // Standard input output library

int main() {                                            // Program yahin se start hota hai (main function)
    int choice, a, b;                                   // Menu choice aur do numbers
    do {                                                // Menu baar baar dikhane ke liye do-while loop
        printf("\n--- MENU ---\n");                     // Menu ka heading
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Exit\n");   // Menu options
        printf("Enter your choice: ");                  // Choice maango
        scanf("%d", &choice);                           // Choice input lo
        if (choice >= 1 && choice <= 3) {               // Sirf 1 se 3 ke liye numbers chahiye
            printf("Enter two numbers: ");              // Do numbers maango
            scanf("%d %d", &a, &b);                     // Numbers input lo
        }                                               // if block end
        switch (choice) {                               // Choice ke hisaab se kaam
            case 1: printf("Sum = %d\n", a + b); break;         // Addition
            case 2: printf("Difference = %d\n", a - b); break;  // Subtraction
            case 3: printf("Product = %d\n", a * b); break;     // Multiplication
            case 4: printf("Exiting...\n"); break;              // Program band hone ka message
            default: printf("Invalid choice\n");                // Galat choice
        }                                               // switch end
    } while (choice != 4);                              // Jab tak user 4 (Exit) na chune, loop chalta rahega
    return 0;                                           // Program successfully khatam
}                                                       // main function end

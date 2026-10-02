#include <stdio.h>                          // Standard input output library

int main() {                                // Program yahin se start hota hai (main function)
    int choice;                             // User ka choice
    printf("Enter 1, 2 or 3: ");            // Choice maango
    scanf("%d", &choice);                   // Choice input lo
    switch (choice) {                       // choice ki value ke hisaab se case chunega
        case 1:                             // Agar choice 1 hai
            printf("One\n");                // One print karo
            break;                          // break se switch se bahar, warna agla case bhi chal jayega
        case 2:                             // Agar choice 2 hai
            printf("Two\n");                // Two print karo
            break;                          // switch se bahar
        case 3:                             // Agar choice 3 hai
            printf("Three\n");              // Three print karo
            break;                          // switch se bahar
        default:                            // Koi case match nahi hua
            printf("Invalid choice\n");     // Galat choice ka message
    }                                       // switch end
    return 0;                               // Program successfully khatam
}                                           // main function end

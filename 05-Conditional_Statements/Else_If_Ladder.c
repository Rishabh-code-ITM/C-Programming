#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    int marks;                                  // Marks store karne ke liye
    printf("Enter marks (0-100): ");            // Marks maango
    scanf("%d", &marks);                        // Marks input lo
    if (marks >= 90) {                          // 90 ya usse zyada
        printf("Grade A\n");                    // Grade A
    } else if (marks >= 75) {                   // 75 se 89 ke beech
        printf("Grade B\n");                    // Grade B
    } else if (marks >= 50) {                   // 50 se 74 ke beech
        printf("Grade C\n");                    // Grade C
    } else if (marks >= 40) {                   // 40 se 49 ke beech
        printf("Grade D\n");                    // Grade D
    } else {                                    // 40 se kam
        printf("Fail\n");                       // Fail
    }                                           // ladder end (upar se niche pehli true condition chalti hai)
    return 0;                                   // Program successfully khatam
}                                               // main function end

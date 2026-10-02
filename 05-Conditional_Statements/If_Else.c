#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    int marks;                                  // Marks store karne ke liye variable
    printf("Enter marks: ");                    // Marks maango
    scanf("%d", &marks);                        // Marks input lo
    if (marks >= 40) {                          // Agar marks 40 ya usse zyada hain
        printf("Pass\n");                       // To Pass print karo
    } else {                                    // Warna (condition false hone par)
        printf("Fail\n");                       // Fail print karo
    }                                           // if-else block end
    return 0;                                   // Program successfully khatam
}                                               // main function end

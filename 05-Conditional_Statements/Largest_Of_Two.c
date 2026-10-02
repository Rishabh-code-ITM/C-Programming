#include <stdio.h>                                      // Standard input output library

int main() {                                            // Program yahin se start hota hai (main function)
    int a, b;                                           // Do numbers ke variables
    printf("Enter two numbers: ");                      // Do numbers maango
    scanf("%d %d", &a, &b);                             // Dono numbers input lo
    if (a > b) {                                        // Agar a bada hai
        printf("%d is largest\n", a);                   // To a print karo
    } else if (b > a) {                                 // Agar b bada hai
        printf("%d is largest\n", b);                   // To b print karo
    } else {                                            // Dono barabar hain
        printf("Both are equal\n");                     // Barabar hone ka message
    }                                                   // if-else block end
    return 0;                                           // Program successfully khatam
}                                                       // main function end

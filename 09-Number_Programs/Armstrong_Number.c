#include <stdio.h>                                      // Standard input output library

int main() {                                            // Program yahin se start hota hai (main function)
    int num, original, sum = 0;                         // sum mein digit cubes ka total aayega
    printf("Enter a 3-digit number: ");                 // 3 digit ka number maango
    scanf("%d", &num);                                  // Number input lo
    original = num;                                     // Asli number save karo
    while (num != 0) {                                  // Har digit ke liye
        int d = num % 10;                               // Last digit nikalo
        sum += d * d * d;                               // Digit ka cube sum mein jodo
        num /= 10;                                      // Last digit hatao
    }                                                   // while loop end
    if (sum == original) {                              // Agar cubes ka sum asli number ke barabar hai
        printf("%d is an Armstrong number\n", original);        // Armstrong hai (jaise 153)
    } else {                                            // Warna
        printf("%d is not an Armstrong number\n", original);    // Armstrong nahi hai
    }                                                   // if-else end
    return 0;                                           // Program successfully khatam
}                                                       // main function end

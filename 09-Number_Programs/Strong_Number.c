#include <stdio.h>                                      // Standard input output library

int main() {                                            // Program yahin se start hota hai (main function)
    int num, original, sum = 0;                         // sum mein digit factorials ka total
    printf("Enter a number: ");                         // Number maango
    scanf("%d", &num);                                  // Number input lo
    original = num;                                     // Asli number save karo
    while (num != 0) {                                  // Har digit ke liye
        int d = num % 10;                               // Last digit nikalo
        int fact = 1;                                   // Is digit ka factorial, start 1 se
        for (int i = 1; i <= d; i++) {                  // 1 se d tak
            fact *= i;                                  // Factorial calculate karo
        }                                               // for loop end
        sum += fact;                                    // Factorial ko sum mein jodo
        num /= 10;                                      // Last digit hatao
    }                                                   // while loop end
    if (sum == original) {                              // Factorials ka sum asli number ke barabar ho to strong
        printf("%d is a strong number\n", original);    // Strong hai (jaise 145)
    } else {                                            // Warna
        printf("%d is not a strong number\n", original);    // Strong nahi hai
    }                                                   // if-else end
    return 0;                                           // Program successfully khatam
}                                                       // main function end

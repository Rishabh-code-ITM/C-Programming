#include <stdio.h>                                      // Standard input output library

int main() {                                            // Program yahin se start hota hai (main function)
    int num, original, rev = 0;                         // original mein asli number bachayenge
    printf("Enter a number: ");                         // Number maango
    scanf("%d", &num);                                  // Number input lo
    original = num;                                     // Asli number save kar lo, kyunki num badalta jayega
    while (num != 0) {                                  // Number reverse karne ka loop
        rev = rev * 10 + num % 10;                      // Last digit rev ke end mein jodo
        num /= 10;                                      // Last digit hatao
    }                                                   // while loop end
    if (original == rev) {                              // Agar reverse karne par bhi same number hai
        printf("%d is a palindrome\n", original);       // To palindrome hai
    } else {                                            // Warna
        printf("%d is not a palindrome\n", original);   // Palindrome nahi hai
    }                                                   // if-else end
    return 0;                                           // Program successfully khatam
}                                                       // main function end

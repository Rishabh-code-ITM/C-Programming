#include <stdio.h>                              // Standard input output library

int isPalindrome(int n) {                       // Palindrome ho to 1, warna 0 return karega
    int original = n, rev = 0;                  // Asli number save karo, rev 0 se start
    while (n != 0) {                            // Number reverse karne ka loop
        rev = rev * 10 + n % 10;                // Last digit rev ke end mein jodo
        n /= 10;                                // Last digit hatao
    }                                           // while loop end
    return original == rev;                     // Dono barabar hain to 1 return hoga
}                                               // isPalindrome function end

int main() {                                    // Program yahin se start hota hai (main function)
    int n;                                      // Number store karne ke liye
    printf("Enter a number: ");                 // Number maango
    scanf("%d", &n);                            // Number input lo
    if (isPalindrome(n)) {                      // Function ka result check karo
        printf("Palindrome\n");                 // Palindrome hai
    } else {                                    // Warna
        printf("Not Palindrome\n");             // Palindrome nahi hai
    }                                           // if-else end
    return 0;                                   // Program successfully khatam
}                                               // main function end

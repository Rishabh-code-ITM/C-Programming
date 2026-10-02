#include <stdio.h>                                      // Standard input output library

int main() {                                            // Program yahin se start hota hai (main function)
    char str[] = "madam";                               // String jise check karna hai
    int len = 0, isPal = 1;                             // isPal flag: 1 = palindrome maan ke chalo
    while (str[len] != '\0') len++;                     // String ki length nikalo
    for (int i = 0; i < len / 2; i++) {                 // Aage aur peeche se compare karo
        if (str[i] != str[len - 1 - i]) {               // Agar koi jodi match nahi hui
            isPal = 0;                                  // To palindrome nahi hai
            break;                                      // Aage check karna bekar hai
        }                                               // if block end
    }                                                   // for loop end
    if (isPal) {                                        // Flag 1 hai to palindrome
        printf("%s is a palindrome\n", str);            // Palindrome hai
    } else {                                            // Warna
        printf("%s is not a palindrome\n", str);        // Palindrome nahi hai
    }                                                   // if-else end
    return 0;                                           // Program successfully khatam
}                                                       // main function end

#include <stdio.h>                                      // Standard input output library

int isArmstrong(int n) {                                // 3-digit Armstrong check: ho to 1, warna 0
    int original = n, sum = 0;                          // Asli number save karo, sum 0 se start
    while (n != 0) {                                    // Har digit ke liye
        int d = n % 10;                                 // Last digit nikalo
        sum += d * d * d;                               // Digit ka cube jodo
        n /= 10;                                        // Last digit hatao
    }                                                   // while loop end
    return sum == original;                             // Barabar ho to Armstrong
}                                                       // isArmstrong function end

int main() {                                            // Program yahin se start hota hai (main function)
    int n;                                              // Number store karne ke liye
    printf("Enter a 3-digit number: ");                 // Number maango
    scanf("%d", &n);                                    // Number input lo
    if (isArmstrong(n)) {                               // Function ka result check karo
        printf("Armstrong number\n");                   // Armstrong hai
    } else {                                            // Warna
        printf("Not an Armstrong number\n");            // Armstrong nahi hai
    }                                                   // if-else end
    return 0;                                           // Program successfully khatam
}                                                       // main function end

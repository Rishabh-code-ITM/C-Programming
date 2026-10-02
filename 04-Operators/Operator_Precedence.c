#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    int r1 = 10 + 5 * 2;                        // * ki priority + se zyada hai, isliye 5*2=10 pehle, answer 20
    int r2 = (10 + 5) * 2;                      // Brackets sabse pehle solve hote hain, answer 30
    int r3 = 20 / 5 * 2;                        // / aur * same priority, left se right chalte hain: (20/5)*2 = 8
    int r4 = 10 > 5 && 3 < 1;                   // Relational pehle, phir &&: (1) && (0) = 0
    printf("10 + 5 * 2 = %d\n", r1);            // 20 print hoga
    printf("(10 + 5) * 2 = %d\n", r2);          // 30 print hoga
    printf("20 / 5 * 2 = %d\n", r3);            // 8 print hoga
    printf("10>5 && 3<1 = %d\n", r4);           // 0 print hoga
    return 0;                                   // Program successfully khatam
}                                               // main function end

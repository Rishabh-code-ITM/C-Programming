#include <stdio.h>                                      // Standard input output library

int main() {                                            // Program yahin se start hota hai (main function)
    int a = 1, b = 0;                                   // 1 matlab true, 0 matlab false
    printf("a && b = %d\n", a && b);                    // AND: dono true ho tabhi result true
    printf("a || b = %d\n", a || b);                    // OR: koi ek bhi true ho to result true
    printf("!a = %d\n", !a);                            // NOT: true ko false, false ko true bana deta hai
    printf("(5>3) && (2<4) = %d\n", (5 > 3) && (2 < 4));   // Do conditions ko jod kar check kiya
    return 0;                                           // Program successfully khatam
}                                                       // main function end

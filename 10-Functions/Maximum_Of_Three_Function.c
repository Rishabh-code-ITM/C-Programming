#include <stdio.h>                                      // Standard input output library

int maxOfThree(int a, int b, int c) {                   // Teen numbers mein se sabse bada return karega
    int max = a;                                        // Maan lo a sabse bada hai
    if (b > max) max = b;                               // Agar b usse bada hai to max update karo
    if (c > max) max = c;                               // Agar c usse bada hai to max update karo
    return max;                                         // Sabse bada number wapas bhejo
}                                                       // maxOfThree function end

int main() {                                            // Program yahin se start hota hai (main function)
    int x, y, z;                                        // Teen numbers ke variables
    printf("Enter three numbers: ");                    // Teen numbers maango
    scanf("%d %d %d", &x, &y, &z);                      // Numbers input lo
    printf("Maximum = %d\n", maxOfThree(x, y, z));      // Function call karke result print kiya
    return 0;                                           // Program successfully khatam
}                                                       // main function end

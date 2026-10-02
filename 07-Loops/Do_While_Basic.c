#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    int i = 10;                                 // i ki value 10 hai (condition shuru se hi false hai)
    do {                                        // do-while mein body pehle chalti hai
        printf("i = %d\n", i);                  // Yeh ek baar to zaroor print hoga
        i++;                                    // i ko badhao
    } while (i <= 5);                           // Condition baad mein check hoti hai, isliye loop sirf ek baar chala
    return 0;                                   // Program successfully khatam
}                                               // main function end

#include <stdio.h>                          // Standard input output library

int main() {                                // Program yahin se start hota hai (main function)
    int i = 1;                              // Loop counter ko loop se pehle initialize karte hain
    while (i <= 5) {                        // Jab tak condition true hai, loop chalta rahega
        printf("i = %d\n", i);              // i ki value print karo
        i++;                                // i badhana zaroori hai, warna infinite loop ban jayega
    }                                       // while loop end
    return 0;                               // Program successfully khatam
}                                           // main function end

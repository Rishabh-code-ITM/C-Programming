#include <stdio.h>                                      // Standard input output library

void swap(int *a, int *b) {                             // Pointers liye, taaki original variables badal sakein (call by reference)
    int temp = *a;                                      // a ki value temp mein save
    *a = *b;                                            // a mein b ki value
    *b = temp;                                          // b mein temp (purani a) ki value
}                                                       // swap function end

int main() {                                            // Program yahin se start hota hai (main function)
    int x = 10, y = 20;                                 // Do variables
    printf("Before: x=%d y=%d\n", x, y);                // Swap se pehle
    swap(&x, &y);                                       // Addresses bheje, isliye asli x aur y swap honge
    printf("After: x=%d y=%d\n", x, y);                 // Swap ke baad
    return 0;                                           // Program successfully khatam
}                                                       // main function end

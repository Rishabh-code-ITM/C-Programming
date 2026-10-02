#include <stdio.h>                              // Standard input output library

struct Point {                                  // Structure: alag alag type ke data ko ek naam ke neeche rakhta hai
    int x;                                      // Member 1
    int y;                                      // Member 2
};                                              // Structure definition end (semicolon zaroori hai)

int main() {                                    // Program yahin se start hota hai (main function)
    struct Point p1;                            // Structure ka variable banaya
    p1.x = 3;                                   // Dot operator se member access karte hain
    p1.y = 7;                                   // y member mein value
    printf("Point = (%d, %d)\n", p1.x, p1.y);   // Dono members print karo
    return 0;                                   // Program successfully khatam
}                                               // main function end

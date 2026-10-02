#include <stdio.h>                      // Standard input output library

int main() {                            // Program yahin se start hota hai (main function)
    float price = 99.75f;               // Float variable, decimal number store karta hai
    printf("Price = %f\n", price);      // %f float print karne ke liye (6 decimal tak dikhata hai)
    printf("Price = %.2f\n", price);    // %.2f se sirf 2 decimal places dikhte hain
    return 0;                           // Program successfully khatam
}                                       // main function end

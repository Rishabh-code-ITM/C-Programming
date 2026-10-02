#include <stdio.h>                          // Standard input output library

int main() {                                // Program yahin se start hota hai (main function)
    double pi = 3.141592653589793;          // Double variable, float se zyada precision deta hai
    printf("Pi = %lf\n", pi);               // %lf double print karne ke liye
    printf("Pi = %.10lf\n", pi);            // %.10lf se 10 decimal places tak dikhta hai
    return 0;                               // Program successfully khatam
}                                           // main function end

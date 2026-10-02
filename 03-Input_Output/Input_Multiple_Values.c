#include <stdio.h>                                      // Standard input output library

int main() {                                            // Program yahin se start hota hai (main function)
    int age;                                            // Integer variable
    float height;                                       // Float variable
    char grade;                                         // Character variable
    printf("Enter age, height and grade: ");            // Ek hi line mein teen values maango
    scanf("%d %f %c", &age, &height, &grade);           // Ek scanf mein teen alag type ki values lo
    printf("Age=%d Height=%.1f Grade=%c\n", age, height, grade);   // Teeno values print karo
    return 0;                                           // Program successfully khatam
}                                                       // main function end

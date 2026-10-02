#include <stdio.h>                                      // Standard input output library

int main() {                                            // Program yahin se start hota hai (main function)
    float a, b;                                         // Do numbers
    char op;                                            // Operator (+, -, *, /)
    printf("Enter expression (e.g. 5 + 3): ");          // Expression maango
    scanf("%f %c %f", &a, &op, &b);                     // Number, operator, number input lo
    switch (op) {                                       // Operator ke hisaab se case chalega
        case '+':                                       // Addition
            printf("Result = %.2f\n", a + b);           // Sum print karo
            break;                                      // switch se bahar
        case '-':                                       // Subtraction
            printf("Result = %.2f\n", a - b);           // Difference print karo
            break;                                      // switch se bahar
        case '*':                                       // Multiplication
            printf("Result = %.2f\n", a * b);           // Product print karo
            break;                                      // switch se bahar
        case '/':                                       // Division
            if (b != 0) {                               // Zero se divide nahi kar sakte, isliye check
                printf("Result = %.2f\n", a / b);       // Division ka result
            } else {                                    // b zero hai
                printf("Cannot divide by zero\n");      // Error message
            }                                           // inner if-else end
            break;                                      // switch se bahar
        default:                                        // Koi aur operator
            printf("Invalid operator\n");               // Galat operator ka message
    }                                                   // switch end
    return 0;                                           // Program successfully khatam
}                                                       // main function end

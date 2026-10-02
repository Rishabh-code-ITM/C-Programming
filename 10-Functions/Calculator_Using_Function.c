#include <stdio.h>                                          // Standard input output library

float add(float a, float b) { return a + b; }               // Addition function
float subtract(float a, float b) { return a - b; }          // Subtraction function
float multiply(float a, float b) { return a * b; }          // Multiplication function
float divide(float a, float b) { return a / b; }            // Division function (b zero nahi hona chahiye)

int main() {                                                // Program yahin se start hota hai (main function)
    float x, y;                                             // Do numbers
    char op;                                                // Operator
    printf("Enter expression (e.g. 8 * 3): ");              // Expression maango
    scanf("%f %c %f", &x, &op, &y);                         // Number, operator, number input lo
    switch (op) {                                           // Operator ke hisaab se function call hoga
        case '+': printf("Result = %.2f\n", add(x, y)); break;          // add() call
        case '-': printf("Result = %.2f\n", subtract(x, y)); break;     // subtract() call
        case '*': printf("Result = %.2f\n", multiply(x, y)); break;     // multiply() call
        case '/':                                           // Division ka case
            if (y != 0) printf("Result = %.2f\n", divide(x, y));        // Zero check ke baad divide() call
            else printf("Cannot divide by zero\n");         // Zero se divide nahi hota
            break;                                          // switch se bahar
        default: printf("Invalid operator\n");              // Galat operator
    }                                                       // switch end
    return 0;                                               // Program successfully khatam
}                                                           // main function end

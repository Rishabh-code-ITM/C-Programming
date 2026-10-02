#include <stdio.h>                                          // Standard input output library

int main() {                                                // Program yahin se start hota hai
    int a, b;                                               // Do integer numbers lenge
    char op;                                                // Operator store karega + - * / %
    char again;                                             // Dobara chalana hai ya nahi
    int result;                                             // Result store karne ke liye

    do {                                                    // Calculator ko baar baar chalane ke liye loop start
        printf("\nEnter first number: ");                    // Pehla number maango
        scanf("%d", &a);                                    // Pehla number input lo

        printf("Enter operator (+, -, *, /, %%): ");        // Operator maango
        scanf(" %c", &op);                                  // Operator input lo (space se enter skip hota hai)

        printf("Enter second number: ");                    // Dusra number maango
        scanf("%d", &b);                                    // Dusra number input lo

        if(op == '+') {                                     // Agar operator + hai
            result = a + b;                                 // Addition karo
            printf("Result = %d\n", result);                // Result print karo
        }                                                   // if end
        else if(op == '-') {                                // Agar operator - hai
            result = a - b;                                 // Subtraction karo
            printf("Result = %d\n", result);                // Result print karo
        }                                                   // else if end
        else if(op == '*') {                                // Agar operator * hai
            result = a * b;                                 // Multiplication karo
            printf("Result = %d\n", result);                // Result print karo
        }                                                   // else if end
        else if(op == '/') {                                // Agar operator / hai
            if(b == 0) {                                    // Check karo dusra number zero to nahi
                printf("Error: Cannot divide by zero\n");   // Zero hai to error dikhao
            } else {                                        // Zero nahi hai to
                result = a / b;                             // Division karo
                printf("Result = %d\n", result);            // Result print karo
            }                                               // inner if-else end
        }                                                   // else if end
        else if(op == '%') {                                // Agar operator % hai
            if(b == 0) {                                    // Check karo zero to nahi
                printf("Error: Cannot divide by zero\n");   // Zero hai to error
            } else {                                        // Zero nahi hai to
                result = a % b;                             // Modulus nikalo (remainder)
                printf("Result = %d\n", result);            // Result print karo
            }                                               // inner if-else end
        }                                                   // else if end
        else {                                              // Koi bhi operator match nahi hua
            printf("Invalid operator!\n");                  // Galat operator ka message
        }                                                   // outer if-else end

        printf("Calculate again? (y/n): ");                 // Puchho dobara karna hai kya
        scanf(" %c", &again);                               // Jawab lo y ya n
    } while(again == 'y' || again == 'Y');                  // y dabane par loop phir chalega

    printf("Thank you for using calculator!\n");            // Last me thank you message
    return 0;                                               // Program successfully khatam
}                                                           // main function end
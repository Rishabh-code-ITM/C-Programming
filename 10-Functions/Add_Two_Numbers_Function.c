#include <stdio.h>                                      // Standard input output library

int add(int a, int b) {                                 // Do parameters lekar unka sum return karega
    return a + b;                                       // Sum wapas bhejo
}                                                       // add function end

int main() {                                            // Program yahin se start hota hai (main function)
    int x, y;                                           // Do numbers ke variables
    printf("Enter two numbers: ");                      // Do numbers maango
    scanf("%d %d", &x, &y);                             // Numbers input lo
    printf("Sum = %d\n", add(x, y));                    // Function call karke seedha result print kiya
    return 0;                                           // Program successfully khatam
}                                                       // main function end

#include <stdio.h>                                      // Standard input output library

int maxOfTwo(int a, int b) {                            // Do numbers mein se bada return karega
    return (a > b) ? a : b;                             // Ternary operator se bada number chuna
}                                                       // maxOfTwo function end

int main() {                                            // Program yahin se start hota hai (main function)
    int x, y;                                           // Do numbers ke variables
    printf("Enter two numbers: ");                      // Do numbers maango
    scanf("%d %d", &x, &y);                             // Numbers input lo
    printf("Maximum = %d\n", maxOfTwo(x, y));           // Function se bada number nikala aur print kiya
    return 0;                                           // Program successfully khatam
}                                                       // main function end

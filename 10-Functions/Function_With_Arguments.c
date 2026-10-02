#include <stdio.h>                                      // Standard input output library

void printSquare(int n) {                               // n parameter hai, call karte waqt value milegi
    printf("Square of %d = %d\n", n, n * n);            // n ka square print karo
}                                                       // printSquare function end

int main() {                                            // Program yahin se start hota hai (main function)
    printSquare(5);                                     // 5 argument ke roop mein bheja
    printSquare(12);                                    // 12 argument ke roop mein bheja
    return 0;                                           // Program successfully khatam
}                                                       // main function end

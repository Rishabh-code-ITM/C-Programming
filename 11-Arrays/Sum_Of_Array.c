#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    int arr[] = {4, 8, 15, 16, 23, 42};         // Array
    int n = sizeof(arr) / sizeof(arr[0]);       // Elements ki ginti
    int sum = 0;                                // sum 0 se start
    for (int i = 0; i < n; i++) {               // Saare elements par loop
        sum += arr[i];                          // Har element ko sum mein jodo
    }                                           // for loop end
    printf("Sum = %d\n", sum);                  // Sum print karo
    return 0;                                   // Program successfully khatam
}                                               // main function end

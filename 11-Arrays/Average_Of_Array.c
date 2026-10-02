#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    int arr[] = {10, 20, 30, 40, 50};           // Array
    int n = sizeof(arr) / sizeof(arr[0]);       // Elements ki ginti
    int sum = 0;                                // sum 0 se start
    for (int i = 0; i < n; i++) {               // Saare elements par loop
        sum += arr[i];                          // Sum nikalo
    }                                           // for loop end
    float avg = (float)sum / n;                 // float mein cast kiya taaki decimal average mile
    printf("Average = %.2f\n", avg);            // Average print karo
    return 0;                                   // Program successfully khatam
}                                               // main function end

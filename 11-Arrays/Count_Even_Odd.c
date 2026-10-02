#include <stdio.h>                                          // Standard input output library

int main() {                                                // Program yahin se start hota hai (main function)
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};                // Array
    int n = sizeof(arr) / sizeof(arr[0]);                   // Elements ki ginti
    int even = 0, odd = 0;                                  // Dono counters 0 se start
    for (int i = 0; i < n; i++) {                           // Saare elements par loop
        if (arr[i] % 2 == 0) {                              // Agar element even hai
            even++;                                         // Even counter badhao
        } else {                                            // Warna odd hai
            odd++;                                          // Odd counter badhao
        }                                                   // if-else end
    }                                                       // for loop end
    printf("Even = %d, Odd = %d\n", even, odd);             // Dono counts print karo
    return 0;                                               // Program successfully khatam
}                                                           // main function end

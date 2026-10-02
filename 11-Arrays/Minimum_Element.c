#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    int arr[] = {12, 45, 7, 89, 23};            // Array
    int n = sizeof(arr) / sizeof(arr[0]);       // Elements ki ginti
    int min = arr[0];                           // Pehle element ko min maan lo
    for (int i = 1; i < n; i++) {               // Baaki elements se compare karo
        if (arr[i] < min) {                     // Agar koi element min se chhota mila
            min = arr[i];                       // To min update karo
        }                                       // if block end
    }                                           // for loop end
    printf("Minimum = %d\n", min);              // Minimum print karo
    return 0;                                   // Program successfully khatam
}                                               // main function end

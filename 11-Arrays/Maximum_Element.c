#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    int arr[] = {12, 45, 7, 89, 23};            // Array
    int n = sizeof(arr) / sizeof(arr[0]);       // Elements ki ginti
    int max = arr[0];                           // Pehle element ko max maan lo
    for (int i = 1; i < n; i++) {               // Baaki elements se compare karo
        if (arr[i] > max) {                     // Agar koi element max se bada mila
            max = arr[i];                       // To max update karo
        }                                       // if block end
    }                                           // for loop end
    printf("Maximum = %d\n", max);              // Maximum print karo
    return 0;                                   // Program successfully khatam
}                                               // main function end

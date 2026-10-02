#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    int arr[] = {5, 10, 15, 20, 25};            // Array, size compiler khud nikal lega
    int n = sizeof(arr) / sizeof(arr[0]);       // Total size / ek element ka size = elements ki ginti
    for (int i = 0; i < n; i++) {               // Saare elements par loop
        printf("%d ", arr[i]);                  // Element print karo
    }                                           // for loop end
    printf("\n");                               // Last mein nayi line
    return 0;                                   // Program successfully khatam
}                                               // main function end

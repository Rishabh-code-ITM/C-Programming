#include <stdio.h>                                      // Standard input output library

int main() {                                            // Program yahin se start hota hai (main function)
    int arr[] = {3, 9, 14, 21, 30};                     // Array
    int n = sizeof(arr) / sizeof(arr[0]);               // Elements ki ginti
    int key, found = 0;                                 // key = jo dhundhna hai, found flag 0 = nahi mila
    printf("Enter number to search: ");                 // Number maango
    scanf("%d", &key);                                  // Number input lo
    for (int i = 0; i < n; i++) {                       // Linear search: ek ek element check karo
        if (arr[i] == key) {                            // Agar element mil gaya
            printf("Found at index %d\n", i);           // Index batao
            found = 1;                                  // Flag 1 kar do
            break;                                      // Aage dhundhne ki zaroorat nahi
        }                                               // if block end
    }                                                   // for loop end
    if (!found) {                                       // Agar poore array mein nahi mila
        printf("Element not found\n");                  // Nahi mila ka message
    }                                                   // if block end
    return 0;                                           // Program successfully khatam
}                                                       // main function end

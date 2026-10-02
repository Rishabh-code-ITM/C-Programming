#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    int arr[] = {1, 2, 3, 4, 5};                // Array
    int n = sizeof(arr) / sizeof(arr[0]);       // Elements ki ginti
    for (int i = 0; i < n / 2; i++) {           // Sirf aadhe array tak swap karna kaafi hai
        int temp = arr[i];                      // Temporary variable mein pehle ka element save
        arr[i] = arr[n - 1 - i];                // Aage wale ki jagah peeche wala element
        arr[n - 1 - i] = temp;                  // Peeche wali jagah temp ki value
    }                                           // for loop end
    for (int i = 0; i < n; i++) {               // Reversed array print karne ka loop
        printf("%d ", arr[i]);                  // Element print karo
    }                                           // for loop end
    printf("\n");                               // Last mein nayi line
    return 0;                                   // Program successfully khatam
}                                               // main function end

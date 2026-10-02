#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    int arr[] = {64, 25, 12, 22, 11};           // Unsorted array
    int n = sizeof(arr) / sizeof(arr[0]);       // Elements ki ginti
    for (int i = 0; i < n - 1; i++) {           // Bubble sort: n-1 passes chahiye
        for (int j = 0; j < n - 1 - i; j++) {   // Har pass mein adjacent elements compare karo
            if (arr[j] > arr[j + 1]) {          // Agar left wala right wale se bada hai
                int temp = arr[j];              // Swap ke liye temp mein save
                arr[j] = arr[j + 1];            // Chhota element aage laao
                arr[j + 1] = temp;              // Bada element peeche bhejo
            }                                   // if block end
        }                                       // inner loop end
    }                                           // outer loop end
    printf("Sorted array: ");                   // Heading
    for (int i = 0; i < n; i++) {               // Sorted array print karne ka loop
        printf("%d ", arr[i]);                  // Element print karo
    }                                           // for loop end
    printf("\n");                               // Last mein nayi line
    return 0;                                   // Program successfully khatam
}                                               // main function end

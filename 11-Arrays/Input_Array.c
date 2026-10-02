#include <stdio.h>                                  // Standard input output library

int main() {                                        // Program yahin se start hota hai (main function)
    int arr[5];                                     // 5 elements ka array
    printf("Enter 5 numbers: ");                    // Numbers maango
    for (int i = 0; i < 5; i++) {                   // Index 0 se 4 tak loop
        scanf("%d", &arr[i]);                       // Har element ko input lo
    }                                               // for loop end
    printf("Third number you entered = %d\n", arr[2]);   // Teesra element print karo
    return 0;                                       // Program successfully khatam
}                                                   // main function end

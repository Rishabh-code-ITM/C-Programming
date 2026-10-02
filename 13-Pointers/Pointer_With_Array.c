#include <stdio.h>                                  // Standard input output library

int main() {                                        // Program yahin se start hota hai (main function)
    int arr[] = {10, 20, 30, 40};                   // Array
    int *p = arr;                                   // Array ka naam pehle element ka address hota hai
    for (int i = 0; i < 4; i++) {                   // 4 elements par loop
        printf("%d ", *(p + i));                    // *(p+i) matlab arr[i], pointer se element access
    }                                               // for loop end
    printf("\n");                                   // Last mein nayi line
    return 0;                                       // Program successfully khatam
}                                                   // main function end

#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    int arr[5] = {10, 20, 30, 40, 50};          // 5 integers ka array, index 0 se 4 tak
    printf("First element = %d\n", arr[0]);     // Index 0 par pehla element hota hai
    printf("Third element = %d\n", arr[2]);     // Index 2 matlab teesra element
    arr[1] = 99;                                // Index se value change bhi kar sakte hain
    printf("Updated second = %d\n", arr[1]);    // Badli hui value print karo
    return 0;                                   // Program successfully khatam
}                                               // main function end

#include <stdio.h>                                      // Standard input output library

int main() {                                            // Program yahin se start hota hai (main function)
    int age, hasLicense;                                // Age aur license (1 = hai, 0 = nahi)
    printf("Enter age and license (1/0): ");            // Dono values maango
    scanf("%d %d", &age, &hasLicense);                  // Dono input lo
    if (age >= 18) {                                    // Pehle outer condition check hogi
        if (hasLicense == 1) {                          // Outer true hone par hi inner condition check hogi
            printf("You can drive\n");                  // Age bhi sahi aur license bhi hai
        } else {                                        // Age sahi hai par license nahi
            printf("Get a license first\n");            // Pehle license banwao
        }                                               // inner if-else end
    } else {                                            // Age 18 se kam hai
        printf("You are too young to drive\n");         // Abhi gaadi nahi chala sakte
    }                                                   // outer if-else end
    return 0;                                           // Program successfully khatam
}                                                       // main function end

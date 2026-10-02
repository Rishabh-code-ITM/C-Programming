#include <stdio.h>                                      // Standard input output library

int main() {                                            // Program yahin se start hota hai (main function)
    int arr[] = {10, 20, 30};                           // Array
    int *p = arr;                                       // p pehle element ko point karta hai
    printf("*p = %d\n", *p);                            // 10
    p++;                                                // p++ pointer ko agle int par le jata hai (4 bytes aage)
    printf("After p++, *p = %d\n", *p);                 // 20
    p += 1;                                             // Ek aur element aage
    printf("After p+=1, *p = %d\n", *p);                // 30
    p--;                                                // Ek element peeche
    printf("After p--, *p = %d\n", *p);                 // Wapas 20
    return 0;                                           // Program successfully khatam
}                                                       // main function end

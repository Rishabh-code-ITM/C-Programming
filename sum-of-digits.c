#include <stdio.h>  // Preprocessor Directive - stdio.h header file

int main() {  // main function - program yahi se start hota hai
    int n, sum = 0, rem;  // variable declaration


    printf("Enter the number: ");   // user ko message dikhane ke liye
    scanf("%d",&n);   // user se input lene ke liye 
    while (n > 0) // jab tak number 0 se bada hai tab tak loop chalega 
    {
        rem = n % 10;  // reminder nikalega 
        sum = sum + rem;  // remind me sum add karega 
        n = n / 10;  // last digit hatayega
    }
    printf("sum of digit = %d",sum);  // final output

    return 0; // program successfully khatam
}
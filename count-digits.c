// using while loop

#include <stdio.h> // Preprocessor Directive - stdio.h header file

int main() {  // main function - program yahi se start hota hai
    int n, count = 0;   // variable declaration

    printf("Enter the number: ");  // user ko message dikhane ke liye
    scanf("%d", &n);   // user se input lene ke liye 

    while(n != 0)  // check karega number 0 nahi hai tab tak loop chalega
    {
        n = n / 10; // last digit hatayega
        count++;  // digit count badhayega
    }
    printf("Total Digits = %d\n", count);  // final output
    return 0; // program successfully khatam
}
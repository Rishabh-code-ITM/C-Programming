#include <stdio.h>  // Preprocessor Directive - stdio.h header file
int main() {   // main function - program yahi se start hota hai
    int n, rev = 0, rem; // variable declaration

    printf("Enter ther number: ");  // user ko message dikhane ke liye
    scanf("%d",&n); // user se input lene ke liye 

    while(n != 0)  // check karega number 0 nahi hai tab tak loop chalega
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    printf(" Reverse = %d", rev);
   
    return 0;
}
#include <stdio.h>  // header file 

int main() { // main function 
    int n, i; // integer variable 
    long fact = 1;  // bare number ko factorial nikalne ke liye long ka use karte hai 

    printf("enter the number : "); // print statement
    scanf("%d",&n); // input statement

    if (n > 0) // if condition 
    {
        printf("Not nagative number please Enter the positive number");
    }

    for (i = 1; i <= n; i++) {  // for loop condition
        fact = fact * i;  // factorial formula 
         
    }
    printf("Factorial = %ld",fact);  // print aur yaha long datatype ko call %ld se karte hai 
    return 0; //code successfully return 
}
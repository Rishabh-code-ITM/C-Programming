#include <stdio.h> // stdio.h header file - input output ke liye

int main() { // program ka main function
    int n, rev = 0, rem, original; // saare variables declare kiye

    printf("Enter number: "); // user se number maang rahe hain
    scanf("%d", &n); // user ka number input le rahe hain

    original = n; // original number ko save kar liya, taaki baad me compare kar sake

    while (n != 0) // jab tak number khatam nahi hota tab tak loop chalega
    {
        rem = n % 10; // aakhri digit nikal rahe hain
        rev = rev * 10 + rem; // reverse number bana rahe hain
        n = n / 10; // aakhri digit hata rahe hain
    }

    if (original == rev) // original aur reverse barabar hai kya check
    {
        printf("palindrome hai"); // haan toh palindrome hai
    }
    else {
        printf("palindrome nahi hai"); // nahi toh nahi hai
    }

    return 0; // program successfully khatam
}
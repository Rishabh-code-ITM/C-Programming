#include <stdio.h>

int main()
{
    int choice; // User ka choice store karne ke liye
    float a, b; // a aur b ki value store karne ke liye 

    // yah pahle show karega ki kya kya hai calculator me aur apko kya lena hai 
    printf("===== CALCULATOR (Using Switch Case) =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    
    // User se choice lena
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // User se 2 number lena
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    // ===== SWITCH CASE USE YAHAN HUA HAI =====
    // Choice ke hisab se alag-alag operation hoga
    switch (choice)
    {
        case 1: // Agar choice 1 hai to Addition
            printf("Result of Addition= %.2f\n", a + b);
            break;

        case 2: // Agar choice 2 hai to Subtraction
            printf("Result of Subtraction= %.2f\n", a - b);
            break;

        case 3: // Agar choice 3 hai to Multiplication
            printf("Result of Multiplication= %.2f\n", a * b);
            break;

        case 4: // Agar choice 4 hai to Division
            if (b != 0) // Zero se divide check
                printf("Result of Division= %.2f\n", a / b);
            else
                printf("Division by zero is not allowed.\n");
            break;

        default: // Galat choice daalne par
            printf("Invalid choice.\n");
    }

    return 0;
}
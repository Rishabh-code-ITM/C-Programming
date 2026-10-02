#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    int day;                                    // Din ka number (1 = Monday)
    printf("Enter day number (1-7): ");         // Number maango
    scanf("%d", &day);                          // Number input lo
    switch (day) {                              // Day number ke hisaab se din ka naam
        case 1: printf("Monday\n"); break;      // 1 ke liye Monday
        case 2: printf("Tuesday\n"); break;     // 2 ke liye Tuesday
        case 3: printf("Wednesday\n"); break;   // 3 ke liye Wednesday
        case 4: printf("Thursday\n"); break;    // 4 ke liye Thursday
        case 5: printf("Friday\n"); break;      // 5 ke liye Friday
        case 6: printf("Saturday\n"); break;    // 6 ke liye Saturday
        case 7: printf("Sunday\n"); break;      // 7 ke liye Sunday
        default: printf("Invalid day\n");       // 1 se 7 ke bahar ka number
    }                                           // switch end
    return 0;                                   // Program successfully khatam
}                                               // main function end

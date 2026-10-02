#include <stdio.h>                                  // Standard input output library

int main() {                                        // Program yahin se start hota hai (main function)
    int month;                                      // Mahine ka number
    printf("Enter month number (1-12): ");          // Number maango
    scanf("%d", &month);                            // Number input lo
    switch (month) {                                // Month number ke hisaab se naam aur din
        case 1:  printf("January - 31 days\n"); break;      // January
        case 2:  printf("February - 28/29 days\n"); break;  // February (leap year mein 29)
        case 3:  printf("March - 31 days\n"); break;        // March
        case 4:  printf("April - 30 days\n"); break;        // April
        case 5:  printf("May - 31 days\n"); break;          // May
        case 6:  printf("June - 30 days\n"); break;         // June
        case 7:  printf("July - 31 days\n"); break;         // July
        case 8:  printf("August - 31 days\n"); break;       // August
        case 9:  printf("September - 30 days\n"); break;    // September
        case 10: printf("October - 31 days\n"); break;      // October
        case 11: printf("November - 30 days\n"); break;     // November
        case 12: printf("December - 31 days\n"); break;     // December
        default: printf("Invalid month\n");                 // 1 se 12 ke bahar ka number
    }                                               // switch end
    return 0;                                       // Program successfully khatam
}                                                   // main function end

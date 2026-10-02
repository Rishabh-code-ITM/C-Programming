#include <stdio.h>                                  // Standard input output library

int main() {                                        // Program yahin se start hota hai (main function)
    FILE *fp = fopen("data.txt", "a");              // "a" mode: purane content ko rakhkar end mein naya jodta hai
    if (fp == NULL) {                               // File open nahi hui to
        printf("Cannot open file\n");               // Error message
        return 1;                                   // Error code ke saath program band
    }                                               // if block end
    fprintf(fp, "This line is appended\n");         // File ke end mein nayi line jodi
    fclose(fp);                                     // File band karo
    printf("Data appended\n");                      // Confirmation message
    return 0;                                       // Program successfully khatam
}                                                   // main function end

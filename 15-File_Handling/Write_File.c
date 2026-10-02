#include <stdio.h>                                  // Standard input output library

int main() {                                        // Program yahin se start hota hai (main function)
    FILE *fp = fopen("data.txt", "w");              // Write mode mein file kholi
    if (fp == NULL) {                               // File open nahi hui to
        printf("Cannot open file\n");               // Error message
        return 1;                                   // Error code ke saath program band
    }                                               // if block end
    fprintf(fp, "Hello File Handling\n");           // fprintf file mein text likhta hai (printf jaisa hi)
    fprintf(fp, "Learning C is fun\n");             // Dusri line likhi
    fclose(fp);                                     // File band karo, taaki data save ho jaye
    printf("Data written to file\n");               // Confirmation message
    return 0;                                       // Program successfully khatam
}                                                   // main function end

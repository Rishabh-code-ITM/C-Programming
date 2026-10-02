#include <stdio.h>                                  // Standard input output library

int main() {                                        // Program yahin se start hota hai (main function)
    FILE *fp = fopen("sample.txt", "w");            // "w" mode: nayi file banata hai (purani ho to uska content hata deta hai)
    if (fp == NULL) {                               // Agar file nahi khuli
        printf("Error creating file\n");            // Error message
        return 1;                                   // Error code ke saath program band
    }                                               // if block end
    printf("File created successfully\n");          // File ban gayi
    fclose(fp);                                     // File band karna na bhulein
    return 0;                                       // Program successfully khatam
}                                                   // main function end

#include <stdio.h>                                  // Standard input output library

int main() {                                        // Program yahin se start hota hai (main function)
    FILE *fp = fopen("data.txt", "r");              // "r" mode: sirf padhne ke liye, file pehle se honi chahiye
    if (fp == NULL) {                               // File nahi mili to
        printf("File not found\n");                 // Error message
        return 1;                                   // Error code ke saath program band
    }                                               // if block end
    char line[100];                                 // Ek line store karne ke liye buffer
    while (fgets(line, sizeof(line), fp) != NULL) { // Line by line padho jab tak file khatam na ho
        printf("%s", line);                         // Line screen par print karo
    }                                               // while loop end
    fclose(fp);                                     // File band karo
    return 0;                                       // Program successfully khatam
}                                                   // main function end

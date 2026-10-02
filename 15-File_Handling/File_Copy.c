#include <stdio.h>                                  // Standard input output library

int main() {                                        // Program yahin se start hota hai (main function)
    FILE *src = fopen("data.txt", "r");             // Source file read mode mein
    FILE *dest = fopen("copy.txt", "w");            // Destination file write mode mein
    if (src == NULL || dest == NULL) {              // Koi bhi file nahi khuli to
        printf("Error opening files\n");            // Error message
        return 1;                                   // Error code ke saath program band
    }                                               // if block end
    int ch;                                         // int use karte hain kyunki EOF ek int value hai
    while ((ch = fgetc(src)) != EOF) {              // Ek ek character padho jab tak file khatam (EOF) na ho
        fputc(ch, dest);                            // Wahi character destination mein likho
    }                                               // while loop end
    fclose(src);                                    // Source file band karo
    fclose(dest);                                   // Destination file band karo
    printf("File copied successfully\n");           // Confirmation message
    return 0;                                       // Program successfully khatam
}                                                   // main function end

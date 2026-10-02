#include <stdio.h>                              // Standard input output library

int main() {                                    // Program yahin se start hota hai (main function)
    char str[] = "Hello";                       // String
    int len = 0;                                // Length nikalne ke liye
    while (str[len] != '\0') len++;             // Null tak chalo, length mil jayegi
    for (int i = 0; i < len / 2; i++) {         // Aadhi string tak swap karo
        char temp = str[i];                     // Pehla character temp mein save
        str[i] = str[len - 1 - i];              // Aage ki jagah peeche ka character
        str[len - 1 - i] = temp;                // Peeche ki jagah temp wala character
    }                                           // for loop end
    printf("Reversed: %s\n", str);              // Reversed string print karo
    return 0;                                   // Program successfully khatam
}                                               // main function end

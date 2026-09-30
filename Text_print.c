#include <stdio.h>

int main()
{
    char s[1000]; // isme 1000 charcter store ho sakte hai 

    fgets(s, sizeof(s), stdin);
    // string input lene ke liye 
    printf("Hello, World!\n"); // print karne ke liye 
    printf("%s", s); // string ko call karne ke liye 

    return 0; //exit code successfully return 
}


#include <stdio.h>

int main() {
    int num; 

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0) {  // 0 ya 0 se large number to yah will run
        printf("Number is positive or zero.\n");  
    } else {  // 0 se small negative number will run 
        printf("Number is negative.\n");
    }

    return 0;
}
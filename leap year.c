#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0) {  // check  first if 
        printf("%d is a leap year.\n", year);
    } else if (year % 100 == 0) {   // check first false to second else if  
        printf("%d is not a leap year.\n", year);
    } else if (year % 4 == 0) {  // check second bhi false toh yah
        printf("%d is a leap year.\n", year);
    } else {    // jab sab false toh will run
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

//short program for leap year 
/*#include <stdio.h>

int main() {
    int year;

    printf("Enter your year : ");
    scanf("%d",&year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) { // total condition in one line 
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}*/
#include <stdio.h>

int main() {
    int a,b,c;

    printf("Enter your first number(a) :" );
    scanf("%d",&a);
    printf("Enter your second number(b) :" );
    scanf("%d",&b);
    printf("Enter your third number(c) :" );
    scanf("%d",&c);

    if (a >= b && a >= c) {  // first check 
        printf(" a is the biggest number\n");
    } else if (b >= a && b >= c) {  // first false to second check
        printf(" b is the biggest number\n");
    } else {    //  all false to will run 
        printf(" c is biggest number\n");
    }

    return 0;
}
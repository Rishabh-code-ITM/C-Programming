#include <stdio.h>

int main() {
    int i = 1;

    do {// Runs at least once, then repeats if the condition is true.

        printf("%d\n", i);
        i++;
    } while (i <= 5);

    return 0;
}
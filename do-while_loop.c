#include <stdio.h>

int main() {
    int choice, a, b;

    do {
        // Menu dikha raha hu user ko
        printf("\n1.Add\n");
        printf("2.Sub\n");
        printf("3.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Agar user ne 3 dabaya to exit, nahi to calculation
        if(choice != 3){
            printf("Enter the a value : ");
            scanf("%d", &a);
            printf("Enter the b value : "); // yaha pehle galti se a likha tha
            scanf("%d", &b);

            if(choice==1){
                printf("Sum = %d\n", a+b); // add ka logic
            } 
            if(choice==2){
                printf("Sub = %d\n", a-b); // sub ka logic
            }
        } 
        
    } while(choice != 3); // jab ham 3 dabeyege to program exit ho jayega 

    printf("Program Exit!");
    return 0;
}
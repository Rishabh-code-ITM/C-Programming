// using while loop 
#include <stdio.h> // header file 

int main() {  // main function 
    int n , i = 1;   // variable n jiska table chahiye aur dusra i = 1 se start 

    printf("Enter the number: ");  // yah display par so kare 
    scanf("%d",&n); //yah user se input lega 

    while (i <= 10) {  //yaha condition hai ki loop tab tak chalega jab tak 10 ke barber rahe usse bara huya to tarminet kar jayega 
        printf("%d x %d = %d\n",n,i,n*i); // yah kuch yesa hoha n x i = n*i
        i = i + 1; // i me 1 add hota jayega 
    }
    return 0; //code exit successfully 
}
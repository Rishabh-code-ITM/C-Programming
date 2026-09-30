#include <stdio.h> //header file

int main() {  // main function
    int n,i;// int variable 

    printf("Enter the number: ");  //print function
    scanf("%d",&n); // scanf function

    for (i = 1; i <= n; i++) {  // for loop condition 
        if (i == 5) // if condition 5  i ke equal aayega to   
        {
            continue;  // yah skip kar dega 5 ko 
        }
        printf("%d\n",i); // print 
    }
    
    return 0; // code successfully return 
}
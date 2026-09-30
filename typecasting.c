#include <stdio.h>
int main(){
    int a = 5, b = 2;
    float result;

    result = a / b; // ye 2 dega
    printf("Without casting: %f\n", result);

    result = (float)a / b; // (float) lagate hi 2.5 dega to ise hi typecasting kahte hai float int me bhi ho sakta hai  
    printf("With casting: %f\n", result);
    return 0;
}
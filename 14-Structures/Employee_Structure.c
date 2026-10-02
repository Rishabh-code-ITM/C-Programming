#include <stdio.h>                                          // Standard input output library

struct Employee {                                           // Employee ka structure
    int id;                                                 // Employee ID
    char name[50];                                          // Naam
    float salary;                                           // Salary
};                                                          // Structure end

int main() {                                                // Program yahin se start hota hai (main function)
    struct Employee e = {101, "Amit", 45000.50f};           // Structure ko declare karte hi values de di
    printf("ID: %d\n", e.id);                               // ID print karo
    printf("Name: %s\n", e.name);                           // Naam print karo
    printf("Salary: %.2f\n", e.salary);                     // Salary print karo
    return 0;                                               // Program successfully khatam
}                                                           // main function end

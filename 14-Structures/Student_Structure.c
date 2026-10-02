#include <stdio.h>                                          // Standard input output library

struct Student {                                            // Student ka structure
    char name[50];                                          // Naam
    int roll;                                               // Roll number
    float marks;                                            // Marks
};                                                          // Structure end

int main() {                                                // Program yahin se start hota hai (main function)
    struct Student s;                                       // Student ka variable
    printf("Enter name, roll no and marks: ");              // Details maango
    scanf("%49s %d %f", s.name, &s.roll, &s.marks);         // Details input lo (name array hai isliye & nahi)
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll, s.marks);   // Details print karo
    return 0;                                               // Program successfully khatam
}                                                           // main function end

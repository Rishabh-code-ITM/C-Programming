#include <stdio.h>                                          // Standard input output library

struct Student {                                            // Student ka structure
    char name[30];                                          // Naam
    int marks;                                              // Marks
};                                                          // Structure end

int main() {                                                // Program yahin se start hota hai (main function)
    struct Student s[3] = {                                 // 3 students ka array
        {"Ravi", 78}, {"Sita", 91}, {"Aman", 64}            // Har student ki values
    };                                                      // Array initialization end
    for (int i = 0; i < 3; i++) {                           // Har student par loop
        printf("%s scored %d\n", s[i].name, s[i].marks);    // Naam aur marks print karo
    }                                                       // for loop end
    return 0;                                               // Program successfully khatam
}                                                           // main function end

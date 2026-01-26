// 10_structures_in_c.c
// --------------------------------------------------
// Demonstrates how to use structures in C to store grouped data.
// Tweaking struct fields allows modeling different data objects.
// --------------------------------------------------

#include <stdio.h>
#include <string.h>

// Structure definition
struct Student {
    char name[50];
    int id;
    float gpa;
};

int main() {
    struct Student s1;

    printf("Enter student name: ");
    scanf("%49s", s1.name);
    printf("Enter ID: ");
    scanf("%d", &s1.id);
    printf("Enter GPA: ");
    scanf("%f", &s1.gpa);

    printf("\n--- Student Information ---\n");
    printf("Name: %s\nID: %d\nGPA: %.2f\n", s1.name, s1.id, s1.gpa);

    // Tweaking:
    // - Adding new fields like 'age' requires updating the scanf/printf parts.
    // - You can also create an array of structures to store multiple students.
    return 0;
}

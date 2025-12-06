//write a program to demonstrate array of structures in C
#include <stdio.h>
struct Student {
    int id;
    char name[50];
    float marks;
};
int main() {
    struct Student students[3];

    // Input student details
    for(int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display student details
    printf("\nStudent Details:\n");
    for(int i = 0; i < 3; i++) {
        printf("Student %d: ID=%d, Name=%s, Marks=%.2f\n", 
               i + 1, students[i].id, students[i].name, students[i].marks);
    }

    return 0;
}

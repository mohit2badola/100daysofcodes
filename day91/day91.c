//Define a structure Student with name, roll_no, and marks, then read and print one student's data.

#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}
int main() {
    struct Student student;

    // Read student data
    printf("Enter name: ");
    scanf("%49s", student.name); // Limit input to avoid overflow
    printf("Enter roll number: ");
    scanf("%d", &student.roll_no);
    printf("Enter marks: ");
    scanf("%f", &student.marks);

    // Print student data
    printStudent(student);

    return 0;
}

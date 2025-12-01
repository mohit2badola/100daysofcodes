//Store details of 5 students in an array of structures and print all.

#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
void printStudents(struct Student students[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}
int main() {
    struct Student students[5];

    // Read data for 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%49s", students[i].name); // Limit input to avoid overflow
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    // Print all students' data
    printStudents(students, 5);

    return 0;
}

//Return a structure containing top student's details from a function.
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
struct Student getTopStudent(struct Student students[], int size) {
    struct Student topStudent = students[0];

    for (int i = 1; i < size; i++) {
        if (students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
    }

    return topStudent;
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

    // Get the student with the highest marks
    struct Student topStudent = getTopStudent(students, 5);

    // Print top student's data
    printf("Top Student:\n");
    printf("Name: %s\n", topStudent.name);
    printf("Roll No: %d\n", topStudent.roll_no);
    printf("Marks: %.2f\n", topStudent.marks);

    return 0;
}

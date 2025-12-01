//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
void modifyStudent(struct Student *s) {
    // Modify student data
    printf("Modifying student data...\n");
    printf("Enter new name: ");
    scanf("%49s", s->name); // Limit input to avoid overflow
    printf("Enter new roll number: ");
    scanf("%d", &s->roll_no);
    printf("Enter new marks: ");
    scanf("%f", &s->marks);
}
void printStudent(struct Student *s) {
    printf("Student Details:\n");
    printf("Name: %s\n", s->name);
    printf("Roll No: %d\n", s->roll_no);
    printf("Marks: %.2f\n", s->marks);
}
int main() {
    struct Student student;

    // Read initial student data
    printf("Enter name: ");
    scanf("%49s", student.name); // Limit input to avoid overflow
    printf("Enter roll number: ");
    scanf("%d", &student.roll_no);
    printf("Enter marks: ");
    scanf("%f", &student.marks);

    // Modify student data using pointer to struct
    modifyStudent(&student);

    // Print modified student data
    printStudent(&student);

    return 0;
}

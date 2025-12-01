//Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
void printStudent(struct Student *s) {
    printf("Name: %s\n", s->name);
    printf("Roll No: %d\n", s->roll_no);
    printf("Marks: %.2f\n", s->marks);
}
int main() {
    struct Student *student = (struct Student *)malloc(sizeof(struct Student));
    if (student == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Read student data
    printf("Enter name: ");
    scanf("%49s", student->name); // Limit input to avoid overflow
    printf("Enter roll number: ");
    scanf("%d", &student->roll_no);
    printf("Enter marks: ");
    scanf("%f", &student->marks);

    // Print student data
    printStudent(student);

    // Free allocated memory
    free(student);

    return 0;
}

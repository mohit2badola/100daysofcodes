//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};
int main() {
    FILE *file = fopen("students.txt", "w"); // Open file in write mode
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Take student records as input
    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number and marks for student %d: ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].rollNumber, &students[i].marks);
        // Write student record to file
        fprintf(file, "%s %d %.2f\n", students[i].name, students[i].rollNumber, students[i].marks);
    }

    fclose(file); // Close the file after writing

    // Now read the records back from the file
    file = fopen("students.txt", "r"); // Open file in read mode
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    printf("Name\tRoll Number\tMarks\n");

    struct Student temp;
    // Read and display each student record
    while (fscanf(file, "%s %d %f", temp.name, &temp.rollNumber, &temp.marks) != EOF) {
        printf("%s\t%d\t\t%.2f\n", temp.name, temp.rollNumber, temp.marks);
    }

    fclose(file); // Close the file after reading

    return 0;
}

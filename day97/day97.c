//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};
void writeEmployeeToFile(const char *filename, struct Employee emp) {
    FILE *file = fopen(filename, "wb");
    if (file != NULL) {
        fwrite(&emp, sizeof(struct Employee), 1, file);
        fclose(file);
    } else {
        printf("Error opening file for writing.\n");
    }
}
struct Employee readEmployeeFromFile(const char *filename) {
    struct Employee emp = {"", 0, 0.0f};
    FILE *file = fopen(filename, "rb");
    if (file != NULL) {
        fread(&emp, sizeof(struct Employee), 1, file);
        fclose(file);
    } else {
        printf("Error opening file for reading.\n");
    }
    return emp;
}
int main() {
    struct Employee emp;

    // Read employee details
    printf("Enter employee name: ");
    scanf("%49s", emp.name); // Limit input to avoid overflow
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    // Write employee to file
    const char *filename = "employee.dat";
    writeEmployeeToFile(filename, emp);

    // Read employee from file
    struct Employee readEmp = readEmployeeFromFile(filename);

    // Print read employee details
    printf("\nEmployee details read from file:\n");
    printf("Name: %s\n", readEmp.name);
    printf("ID: %d\n", readEmp.id);
    printf("Salary: %.2f\n", readEmp.salary);

    return 0;
}
    
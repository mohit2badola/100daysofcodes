//Define a struct with enum Gender and print person's gender.
#include <stdio.h>
enum Gender {
    MALE,
    FEMALE,
    OTHER
};
struct Person {
    char name[50];
    enum Gender gender;
};
void printGender(struct Person p) {
    printf("%s's gender is: ", p.name);
    switch (p.gender) {
        case MALE:
            printf("MALE\n");
            break;          
        case FEMALE:
            printf("FEMALE\n");
            break;  
        case OTHER:
            printf("OTHER\n");
            break;
    }   
}
int main() {
    struct Person person1 = {"Alice", FEMALE};
    struct Person person2 = {"Bob", MALE};
    struct Person person3 = {"Charlie", OTHER}; 
    printGender(person1);
    printGender(person2);
    printGender(person3);
    return 0;
}

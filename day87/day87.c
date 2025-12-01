//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>
enum UserRole {
    ADMIN,
    USER,
    GUEST
};
int main() {
    enum UserRole role;

    // Test each user role
    for (role = ADMIN; role <= GUEST; role++) {
        switch (role) {
            case ADMIN:
                printf("ADMIN: You have full access.\n");
                break;
            case USER:
                printf("USER: You have limited access.\n");
                break;
            case GUEST:
                printf("GUEST: You have guest access.\n");
                break;
        }
    }
    return 0;
}
    
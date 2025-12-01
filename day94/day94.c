//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>
struct Point {
    int x;
    int y;
};
void printPoint(struct Point p) {
    printf("Point coordinates: (%d, %d)\n", p.x, p.y);
}
int main() {
    struct Point point;

    // Read point coordinates
    printf("Enter x coordinate: ");
    scanf("%d", &point.x);
    printf("Enter y coordinate: ");
    scanf("%d", &point.y);

    // Print point coordinates
    printPoint(point);

    return 0;
}

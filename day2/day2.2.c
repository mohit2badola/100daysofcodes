//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main() {
    float radius;
    float area, circumference;
    const float PI = 3.14159; // Define the value of Pi

    // Input the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display the results
    printf("The area of the circle is: %.2f\n", area);
    printf("The circumference of the circle is: %.2f\n", circumference);

    return 0;
}
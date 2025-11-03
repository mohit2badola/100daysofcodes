// Write a program to calculate electricity bill based on units consumed with these rates: 
// First 100 units at ₹5/unit 
// Next 100 units at ₹7/unit 
// Next 100 units at ₹10/unit 
// Above at ₹12/unit
#include <stdio.h>
int main() {
    int units;
    float billAmount = 0;

    // Input number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate bill amount based on the number of units consumed
    if (units <= 100) {
        billAmount = units * 5;
    } else if (units <= 200) {
        billAmount = (100 * 5) + ((units - 100) * 7);
    } else if (units <= 300) {
        billAmount = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    } else {
        billAmount = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    // Display the calculated bill amount
    printf("The total electricity bill is: ₹%.2f\n", billAmount);

    return 0;
}
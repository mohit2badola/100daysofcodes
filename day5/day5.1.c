//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
main() {
    float principal, rate, time, simple_interest, compound_interest;
    printf("Enter principal amount, rate of interest (in %%), and time (in years): ");
    scanf("%f %f %f", &principal, &rate, &time);
    
    simple_interest = (principal * rate * time) / 100;
    
    compound_interest = principal * (pow((1 + rate / 100), time)) - principal;
    
    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);
    
    return 0;
}
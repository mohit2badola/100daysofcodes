//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main() {
    int total_seconds, hours, minutes, seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);
    
    hours = total_seconds / 3600; // Calculate hours
    minutes = (total_seconds % 3600) / 60; // Calculate remaining minutes
    seconds = total_seconds % 60; // Calculate remaining seconds
    
    printf("Time in HH:MM:SS format is %02d:%02d:%02d\n", hours, minutes, seconds);
    
    return 0;
}
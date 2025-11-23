//Count characters in a string without using built-in length functions.
#include <stdio.h>
int main()
{
    char str[100];
    int count = 0, i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    if (count > 0 && str[count - 1] == '\n')
        count--;
    printf("Length of the string is: %d\n", count);
    return 0;
}
//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
int main()
{
    char str[15], result[15];
    int i = 0, j = 0;
    printf("Enter date in dd/04/yyyy format: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0')
    {
        if (i == 2 && str[i] == '/')
        {
            result[j++] = '-';
            result[j++] = 'A';
            result[j++] = 'p';
            result[j++] = 'r';
            result[j++] = '-';
            i++; 
        }
        else
        {
            result[j++] = str[i++];
        }
    }
    result[j] = '\0';
    printf("Date in dd-Apr-yyyy format: %s", result);
    return 0;
}
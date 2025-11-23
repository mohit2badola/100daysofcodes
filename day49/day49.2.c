//Print initials of a name with the surname displayed in full.
#include <stdio.h>
int main()
{
    char str[100];
    int i = 0, startOfSurname = -1;
    printf("Enter a name: ");
    fgets(str, sizeof(str), stdin);
    if (str[i] != '\n') 
    {
        printf("Initials: %c", str[i]); 
    }
    while (str[i] != '\0')
    {
        if (str[i] == ' ' && str[i + 1] != '\0' && str[i + 1] != '\n')
        {
            if (str[i + 2] == '\0' || str[i + 2] == '\n') 
            {
                startOfSurname = i + 1; 
                break;
            }
            else
            {
                printf("%c", str[i + 1]); 
            }
        }
        i++;
    }
    if (startOfSurname != -1)
    {
        printf(" "); 
        for (i = startOfSurname; str[i] != '\0' && str[i] != '\n'; i++)
        {
            putchar(str[i]); 
        }
    }
    printf("\n");
    return 0;
}
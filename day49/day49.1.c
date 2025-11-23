//Print the initials of a name.
#include <stdio.h>
int main()
{
    char str[100];
    int i = 0;
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
            printf("%c", str[i + 1]); 
        }
        i++;
    }
    printf("\n");
    return 0;
}
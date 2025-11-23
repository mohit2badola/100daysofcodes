//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
int main()
{
    char str[100];
    int freq[26] = {0};
    int i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0')
    {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z')
        {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2)
            {
                printf("First repeating lowercase alphabet is: %c\n", ch);
                return 0;
            }
        }
        i++;
    }
    printf("No repeating lowercase alphabet found.\n");
    return 0;
}
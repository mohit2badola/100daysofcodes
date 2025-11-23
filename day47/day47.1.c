//Check if two strings are anagrams of each other.
#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int freq[256] = {0};
    int i = 0;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    while (str1[i] != '\0')
    {
        if (str1[i] != '\n') 
            freq[(unsigned char)str1[i]]++;
        i++;
    }
    i = 0;
    while (str2[i] != '\0')
    {
        if (str2[i] != '\n') 
            freq[(unsigned char)str2[i]]--;
        i++;
    }
    for (i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }
    printf("The strings are anagrams.\n");
    return 0;
}
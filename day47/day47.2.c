//Find the longest word in a sentence.
#include <stdio.h>
int main()
{
    char str[200];
    int i = 0, maxLen = 0, currLen = 0, startIndex = 0, maxStartIndex = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0')
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            currLen++;
        }
        else
        {
            if (currLen > maxLen)
            {
                maxLen = currLen;
                maxStartIndex = startIndex;
            }
            currLen = 0;
            startIndex = i + 1;
        }
        i++;
    }
    if (currLen > maxLen)
    {
        maxLen = currLen;
        maxStartIndex = startIndex;
    }
    printf("The longest word is: ");
    for (i = maxStartIndex; i < maxStartIndex + maxLen; i++)
    {
        putchar(str[i]);
    }
    printf("\nLength of the longest word: %d\n", maxLen);
    return 0;
}
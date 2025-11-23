//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
int main()
{
    char str[200], result[200];
    int i = 0, j = 0, start, end;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0')
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
            end = i - 1;
            for (start = end; start >= j; start--)
            {
                result[j++] = str[start];
            }
            result[j++] = str[i]; 
            i++;
        }
        else
        {
            i++;
        }
    }
    end = i - 1;
    for (start = end; start >= j; start--)
    {
        result[j++] = str[start];
    }
    result[j] = '\0';
    printf("Sentence with each word reversed: %s", result);
    return 0;
}
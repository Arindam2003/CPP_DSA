#include <stdio.h>
#include <string.h>
#include <ctype.h>
int count_word(char str[])
{
    int i, count = 0;
    for (i = 0; str[i]; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    return count + 1;
}
char* acronym(char str[])
{
    char temp[50]
    int i = 0, x = 1;
    int word = count_word(str);
    while (i < word)
    {
        if (x && isalpha(str[i]))
        {
            printf("%c ", str[i]);
            i++;
            x = 0;
        }
        // else if (str[i] == '\0')
        // {
        //     printf("%s", str[i-1]);
        // }
        else if (str[i] == ' ')
        {
            i++;
            x = 1;
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    char str[100];
    printf("Enter asentence: ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0';
    acronym(str);
}
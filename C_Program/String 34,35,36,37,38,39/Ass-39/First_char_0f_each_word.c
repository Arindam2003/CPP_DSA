#include <stdio.h>
#include <string.h>
#include <ctype.h>
void first_cap(char str[])
{
    int i = 0;
    int x = 1;
    while (str[i] != '\0')
    {
        if (x && isalpha(str[i]))
        {
            printf("%c ",str[i]);
            x = 0;
        }
        else if (str[i] == ' ')
        {
            x = 1; // Set the flag when encountering a space
        }
        i++;
    }
}

int main()
{
    char str[100];
    printf("Enter asentence: ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0';
    first_cap(str);
}
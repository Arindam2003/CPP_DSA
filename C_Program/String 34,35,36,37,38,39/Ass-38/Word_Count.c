#include <stdio.h>
#include <string.h>
int count_word(char str[])
{
    int i = 0, count = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            i++;
        }
        else if (str[i] == ' ')
        {
            count++;
            while (str[i] == ' ')
            {
                i++;
            }
        }
    }
    return count+1;
}

int main()
{
    int i;
    char str[50];
    printf("Enter a Sentence: ");
    fgets(str, 50, stdin);
    str[strlen(str)] = '\0';
    printf("Word Number is: %d", count_word(str));
}
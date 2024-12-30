
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
    return (count + 1);
}
char *rev(char str[])
{
    int word = count_word(str);
    int i, j = -1, k;
    char c[10][10];
    for (i = 0; i < word; i++)
    {
        for (j++, k = 0; str[j] != ' ' && str[j] != '\0'; j++, k++)
        {
            c[i][k] = str[j];
        }
        c[i][k] = '\0';
    }
    strcpy(str, c[word - 1]);
    strcat(str, " ");
    for (i = word - 2; i > 0; i--)
    {
        strcat(str, c[i]);
        strcat(str, " ");
    }
    strcat(str, c[0]);
    strcat(str, "\0");
    return str;
}

int main()
{
    char str[50];

    printf("Enter a Sentence: ");
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    // printf("%d",count_word(str));
    // printf("\n");
    printf(rev(str));
    return 0;
}


// Another Process Trying.....
/*
#include <stdio.h>
#include <string.h>
int count_word(char str[])
{
    int i, j, count = 0;
    for (i = 0; str[i]; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    return count + 1;
}
char *rev(char str[])
{
    int i, l, j;
    l = count_word(str);
    for (i = 0; i < l / 2; i++)
    {
        for (j = 0; str[j]; j++)
        {

        }
    }
}

int main()
{
    char str[50];
    printf("Enter a Sentence: ");
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    printf("%d", count_word(str));
}
*/
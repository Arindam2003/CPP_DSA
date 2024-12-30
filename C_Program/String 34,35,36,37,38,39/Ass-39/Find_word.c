#include <stdio.h>
#include <string.h>

int find_word(char origin[], char find[])
{
    int i = 0, j = 0, wordCount = 0;
    char temp[100][100];

    // Split the sentence into words
    while (origin[i] != '\0')
    {
        if (origin[i] == ' ' || origin[i] == '\0')
        {
            temp[wordCount][j] = '\0';
            wordCount++;
            j = 0;
        }
        else
        {
            temp[wordCount][j] = origin[i];
            j++;
        }
        i++;
    }
    temp[wordCount][j] = '\0';

    // Check if the word is present
    for (i = 0; i <= wordCount; i++)
    {
        if (strcmp(temp[i], find) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char str1[100], str2[10];
    printf("Enter a sentence: ");
    fgets(str1, 100, stdin);
    str1[strlen(str1) - 1] = '\0'; // Remove the newline character
    printf("Enter a word: ");
    fgets(str2, 10, stdin);
    str2[strlen(str2) - 1] = '\0'; // Remove the newline character

    int x = find_word(str1, str2);
    if (x == 1)
    {
        printf("Word present in the sentence\n");
    }
    else
    {
        printf("Word not present in the sentence\n");
    }

    return 0;
}
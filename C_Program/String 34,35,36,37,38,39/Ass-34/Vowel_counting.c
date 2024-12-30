#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], v[] = "aeiouAEIOU";
    int i, j, count = 0;
    printf("Enter any Sentence: ");
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    for (i = 0; str[i]; i++)
    {
        for (j = 0; v[j]; j++)
        {
            if (str[i] == v[j])
            {
                count++;
            }
        }
    }
    printf(" Number of Vowels are: %d", count);
}
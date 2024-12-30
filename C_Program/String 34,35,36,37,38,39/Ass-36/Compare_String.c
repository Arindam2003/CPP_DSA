#include <stdio.h>
#include <string.h>
int compare(char str1[], char str2[])
{
    int i;
    if (strlen(str1) != strlen(str2))
    {
        return 0;
    }
    else if (strlen(str1) == strlen(str2))
    {
        for (i = 0; i < str1[i] || str2[i]; i++)
        {
            if (str1[i] != str2[i])
            {
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    char str1[50], str2[50];
    printf("Enter any Word or Sentence: ");
    fgets(str1, 50, stdin);
    str1[strlen(str1) - 1] = '\0';
    printf("Enter any Word or Sentence: ");
    fgets(str2, 50, stdin);
    str2[strlen(str2) - 1] = '\0';
    int x = compare(str1, str2);
    if (x == 0)
    {
        printf("Not Equal");
    }
    else if (x == 1)
    {
        printf("Equal");
    }
}
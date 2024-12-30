#include <stdio.h>
#include <string.h>
#include<ctype.h>
int ignorecase(char s1[], char s2[])
{
    int i, j;
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    if (l1 == l1)
    {
        for (i = 0; i<l1;i++)
        {
            if (tolower(s1[i])!=tolower(s2[i]))
            {
                return 0;
            }
        }
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int i, j;
    int x;
    char s1[50], s2[50];
    printf("Enter a Sentence: ");
    fgets(s1, 50, stdin);
    s1[strlen(s1) - 1] = '\0';
    printf("Enter a Sentence: ");
    fgets(s2, 50, stdin);
    s2[strlen(s2) - 1] = '\0';
    x = ignorecase(s1, s2);
    if (x == 1)
    {
        printf("Two String are same");
    }
    else if (x == 0)
    {
        printf("Two String are not same");
    }
}
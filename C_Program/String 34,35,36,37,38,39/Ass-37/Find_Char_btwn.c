#include <stdio.h>
#include <string.h>
int check(char str[], int start, int end, char x)
{
    int i;
    for (i = start; i <= str[end]; i++)
    {
        if (str[i] == x)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char str[50], x;
    int st, end, p;
    printf("Enter a sentence: ");
    fgets(str, 50, stdin);
    str[strlen(str)] = '\0';
    printf("Enter a Charecter: ");
    scanf("%c", &x);
    printf("Starting Index: ");
    scanf("%d", &st);
    printf("Ending Index: ");
    scanf("%d", &end);
    p = check(str, st, end, x);
    if (p == 1)
    {
        printf("True");
    }
    else if (p == 0)
    {
        printf("False");
    }
}
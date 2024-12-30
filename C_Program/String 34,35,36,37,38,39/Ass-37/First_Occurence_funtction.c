#include <stdio.h>
#include <string.h>
int check(char str[], char x)
{
    int i;
    for (i = 0; str[i]; i++)
    {
        if (x == str[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    char str[50], x;
    printf("Enter a sentence: ");
    fgets(str, 50, stdin);
    str[strlen(str)] = '\0';
    printf("Enter a Charecter: ");
    scanf("%c",&x);
    printf("First Occurrence is %d", check(str, x));
}


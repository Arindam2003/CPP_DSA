#include <stdio.h>
#include <string.h>
void check(char str[])
{
    int i, count = 0, ct = 0;
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            count++;
        }
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {
            ct++;
        }
    }
    if (count >= 1 && ct >= 1)
    {
        printf("This is Alphanumeric");
    }
    else
    {
        printf("Not Alphanumric");
    }
}
int main()
{
    char str[50];
    printf("Enter a sentence: ");
    fgets(str, 50, stdin);
    str[strlen(str)] = '\0';
    check(str);
}
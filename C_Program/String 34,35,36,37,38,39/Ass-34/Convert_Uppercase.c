#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[30];
    printf("Enter any Sentence: ");
    fgets(str, 30, stdin);
    int i = 0;
    while (str[i] != '\0')
    {
        str[i] = toupper(str[i]);
        i++;
    }
    printf("UpperCase is %s", str);
}
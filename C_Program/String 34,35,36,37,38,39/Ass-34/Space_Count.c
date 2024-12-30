#include <stdio.h>
int main()
{
    char str[30];
    printf("Enter any Sentence: ");
    fgets(str, 30, stdin);
    int i = 0,count=0;
    while (str[i] != '\0')
    {
        if (str[i] == 32)
        {
            count++;
        }
        i++;
    }
    printf(" Space is - %d",count);
}
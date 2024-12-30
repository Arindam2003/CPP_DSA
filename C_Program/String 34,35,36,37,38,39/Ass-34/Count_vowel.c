#include <stdio.h>
int main()
{
    char str[30];
    printf("Enter any Sentence: ");
    fgets(str, 30, stdin);
    int i = 0,count=0;
    while (str[i] != '\0')
    {
        if (str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u')
        {
            count++;
        }
        i++;
    }
    printf(" Vowel is - %d",count);
}
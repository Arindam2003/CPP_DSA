#include <stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int i;
    int countch=0, countdig=0, count=0;
    printf("Enter any Sentence: ");
    fgets(str, 30, stdin);
    str[strlen(str) - 1] = '\0';
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] < 'Z')
        {
            countch++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            countdig++;
        }
        else
        {
            count++;
        }
    }
    printf("Total Number of alphabet is %d\n", countch);
    printf("Total Number of digit is %d\n", countdig);
    printf("Total Number of sp. is %d\n", count);
}
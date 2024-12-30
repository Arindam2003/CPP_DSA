#include <stdio.h>
#include <string.h>
char* lowercase(char *str)
{
    int i;
    for (i = 0; str[i]; i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    return str;
}

int main()
{
    char p[50];
    printf("Enter a Sentence: ");
    fgets(p,50,stdin);
    p[strlen(p)-1]='\0';
    printf("%s", lowercase(p));
}
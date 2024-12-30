#include <stdio.h>
#include<string.h>
int main()
{
    char str[30],new[30];
    int i;
    int countch=0, countdig=0, count=0;
    printf("Enter any Sentence: ");
    fgets(str, 30, stdin);
    str[strlen(str) - 1] = '\0';
    for(i=0;str[i];i++){
        if (str[i]>='0'&&str[i]<='9')
        {
            printf("First Ocurrence of Charecter in index nmber: %d",i);
            break;
        }
        
    }
}

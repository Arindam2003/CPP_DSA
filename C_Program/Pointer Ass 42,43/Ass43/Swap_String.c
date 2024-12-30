#include <stdio.h>
#include <string.h>

void swap(char *s1, char *s2)
{
    char temp[100];
    strcpy(temp, s1);
    strcpy(s1, s2);
    strcpy(s2, temp);
    printf("After swaping\n");
    printf("\n%s", s1);
    printf("\n%s", s2);
}
int main()
{
    char s1[100], s2[100];
    printf("\nEnter string: ");
    fgets(s1, 100, stdin);
    printf("\nEnter string: ");
    fgets(s2, 100, stdin);
    swap(s1, s2);
    return 0;
}
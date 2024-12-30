#include <stdio.h>
#include <string.h>
void search_all_occurence(char *str, char ch, int *arr,int *count)
{
    int i, j;
    for (i = 0, j = 0; str[i]; i++)
    {
        if (str[i] == ch)
        {
            arr[j] = i;
            j++;
        }
    }
    *count =j;
}
int main()
{
    char str[50], ch;
    int arr[50],count;
    int i;
    printf("Enter a String: ");
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    printf("Enter a Charecter: ");
    scanf("%c",&ch);
    search_all_occurence(str,ch,arr,&count);
    printf("%c charecter Indeces in: ",ch);
    for(i=0;i<count;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
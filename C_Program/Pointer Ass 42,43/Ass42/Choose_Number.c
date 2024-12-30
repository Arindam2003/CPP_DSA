#include<stdio.h>
#include<string.h>

void extract_string(char *str,int start,int end,char *result )
{
    int i,j;
    int x=end-start+1;
    for(i=start,j=0;i<=end,j<x;i++,j++)
    {
        result[j]=str[i];
    }
    printf("%s",result);
}

int main()
{
    char str[50],result[50];
    int st,end;
    printf("Enter a Sentence: ");
    fgets (str,50,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter starting index: ");
    scanf("%d",&st);
    printf("Enter end index: ");
    scanf("%d",&end);

    extract_string(str,st,end,result);
}
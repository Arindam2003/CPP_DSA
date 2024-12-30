/*
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
        str[i] = tolower(str[i]);
        i++;
    }
    printf("UpperCase is %s", str);
}*/


#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int i;
    printf("Enter any Sentence: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(i=0;str[i];i++){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
    printf(str);
}
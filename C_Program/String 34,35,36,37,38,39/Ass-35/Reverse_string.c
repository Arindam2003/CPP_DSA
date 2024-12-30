/*
#include<stdio.h>
#include<string.h>
int main(){
    char tr[30];
    printf("Enter any Sentence: ");
    fgets(tr,30,stdin);
    strrev(tr);
    printf("%s",tr);
}*/

// Interview Question😘

#include <stdio.h>
#include <string.h>
int main()
{
    char tr[30], ch;
    int l, i;
    printf("Enter any Word or Sentence: ");
    fgets(tr, 30, stdin);
    tr[strlen(tr) - 1] = '\0';
    l = strlen(tr);
    for (i = 0; i < l / 2; i++)
    {
        ch = tr[i];
        tr[i] = tr[l - 1 - i];
        tr[l - 1 - i] = ch;
    }
    printf("Reverse Sentence is - %s", tr);
}
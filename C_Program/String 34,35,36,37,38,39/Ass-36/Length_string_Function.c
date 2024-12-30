#include<stdio.h>
#include<string.h>
int length(char str[]){
    int i;
    str[strlen(str)-1]='\0';
    for(i=0;str[i];i++);
    return i;
}

int main(){
    char str[50];
    printf("Enter any sentence: ");
    fgets(str,50,stdin);
    printf("Length is - %d",length(str));
}
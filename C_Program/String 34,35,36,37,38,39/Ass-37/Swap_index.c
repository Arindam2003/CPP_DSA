#include<stdio.h>
#include<string.h>
void exchange(char str[],int p,int j)
{
    char temp=str[p];
    str[p]=str[j];
    str[j]=temp;
}

int main(){
    char str[50];
    int i,j;
    printf("Enter any word or string: ");
    fgets(str,50,stdin);
    str[strlen(str)]='\0';
    printf("Enter Lower Index: ");
    scanf("%d",&i);
    printf("Enter Higher Index: ");
    scanf("%d",&j);
    exchange(str,i,j);
    printf(str);
}
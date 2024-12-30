#include<stdio.h>
#include<string.h>
int isPalindrome(char str[]){
    int i,l;
    l = strlen(str);
    for(i=0;i<=l/2;i++){
        if(str[i]!=str[l-1-i])
        return 0;
    }
    return 1;
}

int main(){
    char str[50];
    int x;
    printf("Enter any Sentence: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    x=isPalindrome(str);
    if(x==0){
        printf("This is not Palindrome");
    }
    else if (x==1){
        printf("This is Palindrome");
    }
}
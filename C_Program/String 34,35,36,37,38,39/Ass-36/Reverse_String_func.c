#include<stdio.h>
#include<string.h>
void rev(char str[]){
    str[strlen(str)-1]='\0';
    int l=strlen(str),i;
    for(i=0;i<l/2;i++){
        char temp=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=temp;
    }
}
int main(){
    printf("Enter any Word or Sentence: ");
    char str[50];
    fgets(str,50,stdin);
    rev(str);
    printf("%s",str);
}
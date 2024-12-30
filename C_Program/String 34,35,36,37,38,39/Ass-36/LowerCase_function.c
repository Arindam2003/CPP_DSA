#include<stdio.h>
#include<string.h>
void lowercase(char str[]){
    int i;
    for(i=0;str[i];i++){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
}

int main(){
    printf("Enter any Word or Sentence: ");
    char str[50];
    fgets(str,50,stdin);
    lowercase(str);
    printf("LowerCase is %s",str);
}
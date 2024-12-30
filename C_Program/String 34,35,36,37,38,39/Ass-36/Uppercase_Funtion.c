#include<stdio.h>
#include<string.h>
void uppercase(char str[]){
    int i;
    for(i=0;str[i];i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
}

int main(){
    printf("Enter any Word or Sentence: ");
    char str[50];
    fgets(str,50,stdin);
    uppercase(str);
    printf("UpperCase is %s",str);
}
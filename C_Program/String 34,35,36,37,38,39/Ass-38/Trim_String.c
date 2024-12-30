#include<stdio.h>
#include<string.h>
char* trim(char str[]){
    int i;
    // char temp;
    for(i=0;str[i];i++){
        if(str[i]!=' '){
            break;
        }
    }
    if(str[i]!='\0'){
        strcpy(str,str+i);
    }

    for(i=0;str[i];i++);
    i--;
    while (str[i]==' ')
    {
        i--;
    }
    str[i+1]='\0';
    return str;
}

int main(){
    char str[50];
    int x;
    printf("Enter any Sentence: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    printf("%s",trim(str));
    printf("\n%d",strlen(str));
    return 0;
}
#include<stdio.h>
#include<string.h>
int count_vowel(char str[]){
    int i,j;
    int count=0;
    char v[]="aeiouAEIOU";
    for (i=0;str[i];i++){
        for(j=0;v[j];j++){
            if(str[i]==v[j]){
                count++;
            }
        }
    } 
    return count;
}

int main(){
    char str[50];
    printf("Enter a sentence: ");
    fgets(str,50,stdin);
    str[strlen(str)]='\0';
    printf("Number of Vowels are %d",count_vowel(str));
}
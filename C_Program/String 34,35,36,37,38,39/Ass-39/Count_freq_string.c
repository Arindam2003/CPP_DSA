#include<stdio.h>
#include<string.h>

void sort(char str[]){
    int i,r,l;
    char ch;
    l=strlen(str)-1;
    for(r=0;r<l;r++){
        for(i=0;i<r-1;i++){
            if (str[i]>str[i+1])
            {
                ch=str[i];
                str[i]=str[i+1];
                str[i+1]=ch;
            }
            
        }
    }
}
void count_freq(char str[])
{
    int i,count;
    char temp[100];
    strcpy(temp,str);
    sort(temp);
    for(i=0,count=1;temp[i];i++){
        if(temp[i]==temp[i+1])
        {
            count++;
        }
        else{
            printf("%c - %d\n",temp[i],count);
            count=1;
        }
    }
}

int main()
{
    char str[100];
    printf("enter asentence: ");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    count_freq(str);
}
#include <stdio.h>
#include<string.h>
int main()
{
	char str[30];
	int i;
	printf("Enter any sentence: ");
	fgets(str, 30, stdin);
	str[strlen(str)-1]='\0';
    for(i=0;str[i];i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
}

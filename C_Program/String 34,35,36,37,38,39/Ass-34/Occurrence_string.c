#include<stdio.h>
#include<string.h>
int main(){
	char str[100],ch;
	int i,count=0;
	printf("Enter any sentence: ");
	fgets(str,100,stdin);
	str[strlen(str)-1]='\0';
	// for(i=0;str[i];i++);
	printf("Enter a Charecter: ");
	scanf("%c",&ch);
	for(i=0;str[i];i++){
		if(str[i]==ch){
			count++;
		}
	}
	printf("%c Charecter Occurrence - %d Times",ch,count);
	return 0;
}

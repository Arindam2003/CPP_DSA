#include<stdio.h>
#include<string.h>
void input2dstring(char str[][20],int n)
{
    int i,l;
    for(i=0;i<n;i++)
    {
        fgets(str[i],20,stdin);
        for(l=0;str[i][l];l++);
        str[i][l-1]='\0';
    }
}
int main()
{
    int i,str[10][20];
    input2dstring(str,4);
    printf(str);
    return 0;
}
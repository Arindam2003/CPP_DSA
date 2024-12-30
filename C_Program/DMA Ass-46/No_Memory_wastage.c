#include<stdio.h>
#include<stdlib.h>
char* inputString()
{
    char *p=NULL,*q=NULL,ch;
    int size=1,i;
    while(1)
    {
        ch=getchar();
        if(ch==10)
            break;
        p=(char*)malloc(size);
        if(q)
        {
            for(i=0;i<size;i++)
                *(p+i)=*(q+i);
            *(p+i-1)=ch;
            free(q);
        }
        else
            *p=ch;
        q=(char*)malloc(size+1);
        for(i=0;i<size;i++)
            *(q+i)=*(p+i);
        *(q+i)='\0';
        free(p);
        size++;
    }
    return q;
}

int main()
{
    char *str;
    printf("Enter a string:");
    str=inputString();
    printf("\n%s",str);
    printf("\n");
    return 0;
}
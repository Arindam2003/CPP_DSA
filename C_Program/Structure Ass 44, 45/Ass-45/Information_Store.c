#include<stdio.h>
#include<string.h>
struct student 
{
    int roll;
    char name[20];
};
struct student input()
{
    struct student s;
    printf("Enter Student roll no and name:");
    scanf("%d",&s.roll);
    fflush(stdin);
    fgets(s.name,20,stdin);
    s.name[strlen(s.name)-1]='\0';
    return s;
}
void display (struct student s)
{
    printf("\n%d -- %s",s.roll,s.name);
}
void inputNstudent(struct student s[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        s[i]=input();
    }
}
void displayNstudent(struct student s[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        display(s[i]);
    }
}
int main()
{
    struct student s[10];
    inputNstudent(s,10);
    displayNstudent(s,10);
}
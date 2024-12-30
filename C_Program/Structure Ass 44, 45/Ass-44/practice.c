#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct emp{
    int id;
    char name[20];
    int salary;
};

struct emp input(){
    struct emp e;
    printf("Enter id:");
    scanf("%d",&e.id);
    printf("Enter your name:");
    fflush(stdin);
    fgets(e.name,20,stdin);
    e.name[strlen(e.name)-1]='\0';
    printf("Enter slary:");
    scanf("%d",&e.salary);
}

void display(struct emp e){
    printf("Id of the member is %d\n",e.id);
    printf("Member name is %s\n",e.name);
    printf("Salary of the member is %d",e.salary);
}


int main(){

}
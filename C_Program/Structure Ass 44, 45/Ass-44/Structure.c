#include<stdio.h>
#include<string.h>
struct Employee 
{
    int memberid;
    char name[30];
    float salary;
};

struct Employee inputEmployee()
{
    struct Employee e;
    printf("Enter Employee Id name and salary");
    scanf("%d",&e.memberid);
    fflush(stdin);
    fgets(e.name,30,stdin);
    e.name[strlen(e.name)-1]='\0';
    scanf("%f",&e.salary);
}

void displaydata(struct Employee e)
{
    printf("\n %d %s %f",e.memberid,e.name,e.salary);
}

struct Employee heighestsalary(struct Employee e[],int n)
{
    struct Employee max;
    max=e[0];
    int i;
    for(i=1;i<n;i++)
    {
        if(max.salary<e[i].salary)
        {
            max=e[i];
        }
    }
    return max;
}

void sortSalary(struct Employee e[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(e[i].salary>e[j].salary){
                struct Employee temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }
}

void sortName(struct Employee e[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(strcmp(e[i].name,e[j].name)>0){
                struct Employee temp=e[i];
                e[i]=e[j];
                e[i]=temp;
            }
        }
    }
}

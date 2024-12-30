//Structure in C Language 
//Data Type:
// 1. Premetive Data Types
// int ,char, float, double
//2. Non Premetive Data Types
// User Define data Types 
// (a) struct
// (b) union 
// (c) enum 

//1. How to creat a data type using struct?


struct Employee
{
    int empid;
    char name[20];
    float salary;
};

//2. How to declare Structure varible?
int main()
{
    int x;
    struct Employee e1,e2;
}

//3. How to initiallize structure variable during declaration?
int main()
{
    int x;
    struct Employee e1 ={100,"Arindam",20000},e2;
}
//4. How to initialize Stature Member Variable after declaration?
#include <stdio.h>
#include <string.h>
int main()
{
    int x;
    struct Employee e1 ={100,"Arindam",20000},e2,e3;
    e2.empid=101;
    strcpy(e2.name,"Arindam");
    e2.salary=30000;
    e3=input();
    display(e1);
    display(e2);
    display(e3);
}

//5. How to creat an array of structure Variable?
void f1()
{
    int a[5];
    struct Employee emp[5];
}

//6. Function Returning Structure?
struct Employee input()
{
    struct Employee e;
    printf("Enter empid name and salary");
    scanf("%d",e.empid);
    fgets(e.name,20,stdin);
    scanf("%f",e.salary);
}

//7. Function call by Passing Structure?
void display(struct Employee e)
{
    printf("\n %d %s %f",e.empid,e.name,e.salary);
}

//8. Structure Pointer?
struct Employee e1;
struct Employee *p;
p=&e1;
Ex:
e1.empid; // here (.)
p->empid; // pointer to structure member variable then arrow.
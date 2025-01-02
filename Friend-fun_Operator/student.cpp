#include<iostream>
#include<stdio.h>
using namespace std;

class Student
{
private:
    int roll_no;
    char name[20];
    int age;
public:
    void setStudent(int r,char n[],int a)
    {
        roll_no=r;
        strcpy(name,n);
        age=a;
    }

    void showData()
    {
        cout<<"\n"<<roll_no<<" "<<name<<" "<<age;
    }
    bool operator==(Student s)
    {
        if(roll_no==s.roll_no && (!strcmp(name,s.name)) && age==s.age)
        {
            return true;
        }
        else{
            return false;
        }
    }
};



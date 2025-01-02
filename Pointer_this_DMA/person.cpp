#include<iostream>
#include<string.h>
using namespace std;

class Person
{
private:
    int age;
    char name[30];
public:
    Person(int a,char n[])
    {
        age=a;
        strcpy(name,n);
    }
};



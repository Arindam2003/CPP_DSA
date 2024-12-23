#include<iostream>
using namespace std;

class Student
{
private:
    int rollno;
    char name[30];
public:
    Student();
    void display();
};

Student::Student()
{
    cout<<"Enter Rollumber:";
    cin>>rollno;
    cout<<"Enter Name";
    cin.ignore();
    cin.getline(name,30);
}
void Student::display()
{
    cout<<endl<<rollno<<" " <<name;
}


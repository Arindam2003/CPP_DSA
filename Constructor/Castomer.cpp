#include<iostream>
#include<string.h>

using namespace std;

class Castomer
{
    private:
        int cust_id;
        char name[40],email[20],mobile[15];
    public:
        Castomer()
        {
            cust_id=0;
            strcpy(name,"Arindam");
            strcpy(email,"xyz@gmai.com");
            strcpy(mobile,"+910000000");
        }
        Castomer(int id,char n[],char e[],char m[])
        {
            cust_id=id;
            strcpy(name,n);
            strcpy(email,e);
            strcpy(mobile,m);
        }
};
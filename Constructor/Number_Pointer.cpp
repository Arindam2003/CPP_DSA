#include<iostream>
using namespace std;

class Number{
    private:
        int size;
        int *arr;
    public:
        Number(int s)
        {
            size=s;
            arr=new int[size];
        }
        ~Number(){
            delete []arr;
        }
        Number(Number &n)
        {
            size=n.size;
            arr=new int[size];
            for (int i=0;i<size;i++)
            {
                arr[i]=n.arr[i];
            }
        }
};
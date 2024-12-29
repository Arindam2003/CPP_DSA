#include<iostream>
using namespace std;

class Array{
    private:
        int *p; int size;
    public:
        Array(int s)
        {
            size=s;
            p=new int[size];
        }
        int& operator[](int index)
        {
            // !Not Completed...
        }
};
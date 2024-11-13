#include<iostream>
using namespace std;

class Complex{
    private:
        int a,b;
    public:
        Complex(int x,int y)
        {
            a=x;
            b=y;
        }
        void showData()
        {
            cout<<"\na="<<a<<" b="<<b;
        }
};

int main()
{   //! When default constructor is not avalable
    Complex a[5]={Complex(1,2),Complex(3,4),Complex(3,1),Complex(0,1),Complex(1,9)};
    int i;
    for (i=0;i<5;i++)
    {
        a[i].showData();
    }

    cout<<endl;
    return 0;
}
#include <iostream>
using namespace std;

class Cuboid{
    private:
        int length,breadth,height;
    public:
        Cuboid()
        {
            height=0;
            length=0;
            breadth=0;
        }
        Cuboid(int h,int l,int b)
        {
            height=h;
            length=l;
            breadth=b;
        }
};

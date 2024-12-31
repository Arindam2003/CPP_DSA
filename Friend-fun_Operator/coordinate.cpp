#include<iostream>
using namespace std;

class Coordinate{
    private:
        int a,b;
    public:
        Coordinate():a(0),b(0){}
        Coordinate(int x,int y):a(x),b(y){}
        Coordinate operator,(Coordinate C){
            return C;
        }
};

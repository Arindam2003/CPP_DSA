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
        friend ostream& operator<<(ostream& ,Coordinate&);
        friend istream& operator>>(istream& ,Coordinate&);
};

ostream& operator<<(ostream& out,Coordinate& t)
{
    out<<t.a<<t.b;
    return out;
}
istream& operator>>(istream& in,Coordinate& t)
{
    in>>t.a>>t.b;
    return in;
}
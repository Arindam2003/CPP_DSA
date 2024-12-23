#include<iostream>
using namespace std;

class Room
{
private:
    int roomno;
    bool isac;
    double price;
public:
    Room(int ,bool,double);
};

Room::Room(int no,bool is_ac,double rs)
{
    roomno=no;
    isac=is_ac;
    price=rs;
}



#include<iostream>

using namespace std;

class Book{
    private:
        int book_id,title,price;
    public:
        Book()
        {
            book_id=0;
            title=0;
            price=0;
        }
        Book(int id,int t,int p)
        {
            book_id=id;
            title=t;
            price=p;
        }
};
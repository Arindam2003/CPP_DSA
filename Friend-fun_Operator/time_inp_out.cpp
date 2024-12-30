#include<iostream>
using namespace std;
class Time{
    private:
        int hr,min,sec;
    public:
        friend istream& operator>>(istream&,Time&);
        friend ostream& operator<<(ostream& ,Time&);
        Time operator=(const Time t) //! Use Const because when assign the value t to collar objet then not chag the value in t
        {
            hr=t.hr;
            min=t.min;
            sec=t.sec;
            return *this;
        }
};
ostream& operator<<(ostream& out,Time& t)  // ! Change in ostream class because of cout object
{
    out<<t.hr<<":"<<t.min<<":"<<t.sec<<endl;
    return out;
}
istream& operator>>(istream& in, Time& t)  // ! 
{
    in>>t.hr>>t.min>>t.sec;
    return in;
}



int main()
{
    // int x=5;
    // // ostream arindam; //! Not an Object of ostream class
    // ofstream file("output.out");
    // ostream arindam(file.rdbuf());  //! ostream class Object "arindam"
    // arindam<<x<<endl;
    Time t1;
    // t1.setTime(12,23,45);
    cout<<t1;
    return 0;
}










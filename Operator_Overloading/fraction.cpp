#include<iostream>
using namespace std;
class fraction
{
    private:
    long numerator; long denominator;
    public:
        fraction (long n=0, long d=0):numerator(n),denominator(d)
        {}
        fraction operator+(fraction f)
        {
            fraction temp;
            temp.numerator=(numerator*f.denominator)+(denominator*f.numerator);
            temp.denominator=denominator*f.denominator;
            return temp;
        }
        bool operator<(fraction f)
        {
            long colar=(numerator*f.denominator);
            long dolar=(denominator*f.numerator);
            if(colar<dolar)
            {
                return true;
            }
            else{
                return false;
            }
        }
};
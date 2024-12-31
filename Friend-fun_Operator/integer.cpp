class Interger
{
private:
    int a;
public:
    void setData(int x)
    {
        a=x;
    }
    friend bool operator!(Interger );
    friend bool operator==(Interger,Interger);
};

bool operator!(Interger I)
{
    return !(I.a);
}
bool operator==(Interger I,Interger J)
{
    return I.a==J.a;
}




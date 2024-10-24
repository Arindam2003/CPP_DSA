#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two number:";
    cin >> a >> b;
    if (a > b)
    {
        cout << "Greater Number is:" << a;
    }
    else if (a < b)
    {
        cout << "Greater Number is:" << b;
    }
    else
    {
        cout << "Both are Equal";
    }
    return 0;
}
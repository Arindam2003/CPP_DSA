#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two Number: ";
    cin >> a >> b;
    cout << "Then " << "a=" << a << " b=" << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Now " << "a=" << a << " b=" << b << endl;
    return 0;
}
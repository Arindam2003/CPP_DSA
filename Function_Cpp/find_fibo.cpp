#include <iostream>
using namespace std;

int fibo(int n)
{
    int a = -1, b = 1, c = 0, i;
    for (i = 0; c <= n; i++)
    {
        c = a + b;
        if (n == c)
            return 1;
        a=b;
        b=c;
    }
    return 0;
}

int main()
{
    cout << "Enter a Number to check is in fibo or not?:";
    int num;
    cin >> num;
    if (fibo(num) == 1)
        cout << "Number in fibo series";
    else if (fibo(num) == 0)
        cout << "Number not present";
    return 0;
}

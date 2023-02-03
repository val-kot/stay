#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int main()
{
    int i;
    double a, b, x, s;
    SetConsoleOutputCP(1251);
    cout << "Enter x: ";
    cin >> x;
    a = 1+x;
    b = sin(1);
    s = a / b;
    for(i=2; i<=5; i++)
    {
        a = i+x;
        b = sin(i);
    }
    cout << "s=" << s;
    return 0;
}


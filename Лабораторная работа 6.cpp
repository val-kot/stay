#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    double a, b, c, x;
    cout<<"Enter a, b, c:"<< endl;
    cin>> a >> b >> c;
    if (a !=b&b != c&c !=a)
        x=1;
    else if (a==b & b==c)
        x=3;
    else
        x=2;
    cout << " "<< x;
    return 0;
}


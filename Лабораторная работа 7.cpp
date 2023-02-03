#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    double x, y, a, b, h;
    cout << "Enter a" << endl;
    cin >> a;
    cout << "Enter b" << endl;
    cin >> b;
    cout << "Enter h" << endl;
    cin >> h;
    cout << "x       y \n  ";
    for(x = a; x <= b; x += h)
    {
        if(x <= 1)
            y = sqrt(fabs(x));
        else if (x <= 3)
            y = 1;
        else (x > 3);
            y = pow((x-4), 2);
        cout<< x << "\t" << y << endl;
    }
    return 0;
}

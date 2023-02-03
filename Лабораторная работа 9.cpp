#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n = 1;
    double a, b, c, d, x, s, e, S = 0;
    SetConsoleOutputCP(1251);
    cout << "¬ведите x и точность е: ";
    cin >> x >> e;
    a = 1;
    b = 3;
    c = 1;
    d = 1;
    s = a * b * c / d;
    while (fabs(s) > e)
    {
        S += s;
        n++;
        a = -a;
        b = b * 9;
        c = c * x * x;
        d *= (2 * n - 1) * (2 * n - 2);
        s = a * b * c / d;
    }
    cout << "s=" << S;
    return 0;
}

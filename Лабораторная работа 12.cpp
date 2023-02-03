#include <iostream>
#include <windows.h>
#include <math.h>
#include <clocale>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int i, j, m, n, **A, i_min =0;
    setlocale (LC_ALL, "rus");
    cout << "Введите m и n:";
    cin >> m >> n;

    A = new int *[m];
    for (i = 0; i < m; i++)
        A[i] = new int[n];

    cout  << "Матрица A:" << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            A[i][j] = rand() % 10 - 3;
            cout << A [i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Матрица:" << endl;
    for (i = 0; i < m; i++)
    {
        i_min = A[i][0];
        for (j = 1; j < n; j++)
        {
            if (A[i][j] < i_min)
                i_min = A[i][j];
        }
        for ( j = 0; j < n; j++)
        {
            A[i][j] = A[i][j] + i_min;
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
     for (i = 0; i < m; i++)
        delete []A[i];
     delete []A;
    return 0;
}

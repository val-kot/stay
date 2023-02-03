#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    int i, a[19], Counter=0;

    for (i=0; i<19; i++)
    {
    a[i] = -5 + rand() %10;
    }
    cout <<"Massiv A: ";
    for(i=0; i<19; i++)
    {
        cout << a[i] <<", ";
   }
   cout <<"\b\b ";
    for(i=0; i<19; i++)
    {
        if(a[i]==0)
            break;
    }

    for(i=i+1; i<19; i++)
    {
        if(a[i]>0)
            Counter++;

    else if(a[i]==0)
            break;

    }
        if(i==19)
            Counter=0;
        cout<<"\nCounter ="<<Counter;

        return 0;
}

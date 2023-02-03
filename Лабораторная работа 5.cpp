#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout<<"x1 y1 x2 y2?";
    double x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    cout<<"s:"<<fixed<<setprecision(2)<<sqrt(pow(x1-x2, 2)+pow(y1-y2, 2))<<endl;
    return 0;

}




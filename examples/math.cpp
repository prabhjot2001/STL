#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x = 10, y = 361;
    double d1 = -2.98, d2 = 5.64;

    cout << abs(d1) << endl;
    cout << sqrt(y) << endl;
    cout << exp(1) << endl;
    cout << pow(2, 8) << endl;
    double radian = 1.57079633;
    double degree = radian * (180 / 3.1415);
    cout << degree << endl;
    cout << sin(degree) << endl;
}
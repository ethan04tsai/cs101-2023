#include <iostream>

using namespace std;

int main()
{
    BMW_car car_1("X5", 2023, 6);
    cout << car_1.m_brand;
    cout << " : Drive Mode = " << car_1.get_Drive_Mode() << endl;
    return 0;
}
